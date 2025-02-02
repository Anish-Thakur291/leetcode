// class Solution {
// public:
//     bool checkAlmostEquivalent(string word1, string word2) {
//       vector<int> a(26),a1(26);
       
//         for(char c:word1){
//             a[c-'a']++;
//         }
//         for(char c1:word2){
//             a1[c1-'a']++;
//         }
//            for(int i=0;i<26;i++){
//             if(abs(a[i]-a1[i]>3)){
//                 return false;
//             }
//            }
            
        
        
//         return true;
//     }
// };
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> v1(26), v2(26);
        for(auto x: word1) v1[x-'a']++;
        for(auto x: word2) v2[x-'a']++;
        for (int i = 0; i < 26; i++) {
            if (abs(v1[i] - v2[i]) > 3) return false;
        }
        return true;
    }
};