class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size()-1;
        int l2=nums2.size()-1;
        int i=0;
        int j=0;
        int maxsub=0;
        while(i<=l1 && j<=l2){
            if(nums1[i]<=nums2[j]){
                maxsub=max(maxsub,j-i);
                j++;
            }
            else{
                i++;
            
            if(i>j)
                j=i;
            }
        }
    return maxsub;
    }
};