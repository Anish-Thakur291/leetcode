class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> row;
        int max_count=0;
        int r=mat.size();
        int ans=-1;
        int c=mat[0].size();
        for(int i=0;i<r;i++){
            int count=0;
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    count++;
                }
                }
                if(count>max_count){
                    max_count=count;
                    ans=i;
            }
        }
                    row.push_back(ans);
                    row.push_back(max_count);
        return row;

    }
};