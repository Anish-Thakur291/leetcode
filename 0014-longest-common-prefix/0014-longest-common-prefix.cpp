class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string m1=strs[0],m=strs[n-1],ans="";
        for(int i=0;i<m1.size();i++){
            if(m1[i]==m[i])
               {ans+=m1[i];}
                 else
                break;
            
        }
        return ans;
    }
};