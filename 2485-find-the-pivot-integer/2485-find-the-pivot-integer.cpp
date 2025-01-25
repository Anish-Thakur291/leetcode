class Solution {
public:
    int pivotInteger(int n) {
        int k=0;
        for(int i=1;i<=n;i++){
            k +=i;
        }
            int s=sqrt(k);
            if(s*s==k){
                return s;
            }
       
        return -1;
    }
};