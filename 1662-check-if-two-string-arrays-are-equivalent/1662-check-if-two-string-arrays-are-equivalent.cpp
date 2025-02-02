class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string add="";
        string add1="";
       
        for(int i=0;i<word1.size();i++){
           add += word1[i];
        }
        for(int j=0;j<word2.size();j++){
           add1 += word2[j];
        }
        if(add!=add1){
            return false;
        }
        return true;
    }
};