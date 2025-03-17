/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int findposition(vector<int>& inorder, int element) {
        for (int i = 0; i < inorder.size(); i++) {
            if (inorder[i] == element) {
                return i;
            }
        }
        return -1; // This should never happen if preorder and inorder are valid
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int& index, int inorderstart, int inorderend) {
        // Base case: If index is out of bounds or the current range of inorder is invalid
        if (index >= preorder.size() || inorderstart > inorderend) {
            return nullptr;  // return nullptr for an empty subtree
        }
        
        // Get the current element from preorder
        int element = preorder[index++];
        
        // Create a new node for this element
        TreeNode* root = new TreeNode(element);
        
        // Find the position of the element in inorder
        int position = findposition(inorder, element);
        
        // Recursively build the left and right subtrees
        root->left = solve(preorder, inorder, index, inorderstart, position - 1);
        root->right = solve(preorder, inorder, index, position + 1, inorderend);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderindex = 0;
        // Corrected the range to inorder.size() - 1
        return solve(preorder, inorder, preorderindex, 0, inorder.size() - 1);
    }
};
