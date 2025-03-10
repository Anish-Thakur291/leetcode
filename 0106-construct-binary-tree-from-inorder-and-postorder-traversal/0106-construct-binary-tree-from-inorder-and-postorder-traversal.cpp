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

    TreeNode* solve(vector<int>& postorder, vector<int>& inorder, int& index, int inorderstart, int inorderend) {
        // Base case: If index is out of bounds or the current range of inorder is invalid
        if (index <0 || inorderstart > inorderend) {
            return nullptr;  // return nullptr for an empty subtree
        }
        
        // Get the last element from preorder
        int element = postorder[index--];
        
        // Create a new node for this element
        TreeNode* root = new TreeNode(element);
        
        // Find the position of the element in inorder
        int position = findposition(inorder, element);
        
        // Recursively build the left and right subtrees
        root->right = solve(postorder, inorder, index, position + 1, inorderend);
        root->left = solve(postorder, inorder, index, inorderstart, position - 1);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postorderindex = postorder.size()-1;
        // Corrected the range to inorder.size() - 1
        return solve(postorder, inorder, postorderindex, 0, inorder.size() - 1);
    }
};
