class Solution {
public:
    int subtractProductAndSum(int n) {
        // int sub;
        int sum=0;
        int product=1;
        while(n>0){
            int k=n%10;
         product *= k;
         sum +=k;

           n= n/10;
        
        //    sub=product -sum;
        }
        return product -sum;
       
    }
};