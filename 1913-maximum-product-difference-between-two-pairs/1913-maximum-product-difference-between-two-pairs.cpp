class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
       int max1=INT_MIN;
       int max2=INT_MIN;
       int min1=INT_MAX;
       int min2=INT_MAX;
       for (int num : nums){
        if(num>max1){
            max2=max1;
            max1=num;
        }
        else if(num>max2){
            max2=num;
        }
        if(num<min1){
            min2=min1;
            min1=num;
        }
        else if(num<min2){
            min2=num;
        }
        

       }
    return(max2*max1-min1*min2);
  
           
           
    }
};