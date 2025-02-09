class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> st;
      for(int i=0;i<words.size();i++){
        for(int j=0;j<words.size();j++){
            if(i!=j && words[j].find(words[i])!=string::npos){
                st.push_back(words[i]);
                break;
            }
        }
      }
      return st;
    }
};