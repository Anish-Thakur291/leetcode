class Solution {
     int logset(string s){
        unordered_set<char>charset;
        int right=0,left=0,max1=0;
        while(right<s.size()){
            if(charset.find(s[right])==charset.end()){
                charset.insert(s[right]);
                max1=max(max1,right-left+1);
                right++;
            }
            else{
                charset.erase(s[left]);
                left++;
            }
        }
        return max1;
     }
public:
    int lengthOfLongestSubstring(string s) {
        return logset(s);
    }
};