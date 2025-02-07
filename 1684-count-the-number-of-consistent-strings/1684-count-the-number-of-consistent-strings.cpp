class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
      unordered_set<char> s;
    for(auto a:allowed){
        s.insert(a);
    }
        int count =0;
    for(auto word:words){
        bool flag=true;
        for(int i=0;i<word.size();i++){
            if(s.find(word[i])==s.end()){
                flag=false;
                break;
            }
            
            
        }
        if(flag)
        count++;
    }
    
    return count;
    }
};