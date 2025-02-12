class Solution {
public:
    bool isPalindrome(string s) {
        string filter="";
        for(auto c:s){
            if(isalnum(c)){
                filter+=tolower(c);
            }
        }
        int s1=0,e=filter.size()-1;
        while(s1<e){
            if(filter[s1]!=filter[e]){
                return false;
            }
            else{
                s1++;
                e--;
            }
        }
        return true;
    }
};