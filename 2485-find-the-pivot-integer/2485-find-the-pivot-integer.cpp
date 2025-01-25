class Solution {
public:
    int pivotInteger(int n) {
        int k=n*(n+1)/2;
     
            int s=sqrt(k);
            if(s*s==k){
                return s;
            }
       
        return -1;
    }
};