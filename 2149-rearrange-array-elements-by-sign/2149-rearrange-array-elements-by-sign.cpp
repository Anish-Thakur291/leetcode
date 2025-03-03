class Solution {
 vector<int> arra(vector<int>& nums) {
     vector<int>pos,neg;
    for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
    }
            int postindex=0;
            int negindex=0;
            int i=0;
            while(postindex<pos.size() && negindex<neg.size()){
                if(i%2==0){
                nums[i]=pos[postindex];
                i++;
                postindex++;
            }
            else{
                nums[i]=neg[negindex];
                i++;
                negindex++; 
            }
            }
             while(postindex<pos.size()){
                 nums[i]=pos[postindex];
                i++;
                postindex++;
             }
              while(negindex<neg.size()){
                nums[i]=neg[negindex];
                i++;
                negindex++; 
            }
        return nums; 
}
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      return arra(nums);
       
    }
   
        
    
};