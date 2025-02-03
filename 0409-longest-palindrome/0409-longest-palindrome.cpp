class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        unordered_map<char,int>mp;
        for(char x: s)
            mp[x]++;
            bool odd=false;
        
        for(auto it:mp){
            if(it.second%2==0){
                ans+=it.second;
            }
            else{
                ans+=(it.second -1);
                odd=true;
            }
        }
        return ans+odd;
    }
};