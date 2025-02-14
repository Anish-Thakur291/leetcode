class Solution {
public:
void rotateAt(vector<int>& arr,int size ){
    int i = 0;
    int j = size;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int maxim(vector<int>& arr ,int size){
  int maxi = INT_MIN;
    int idx;
    for(int i = 0;i<=size;i++){
       if(maxi<arr[i]){
        maxi = arr[i];
           idx = i;
       }
    }
    return idx ;
}
     vector<int> pancakeSort(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        vector<int>result;
        while(j>=0){
            int idx = maxim(arr,j);
            rotateAt(arr,idx);
            result.push_back(idx+1);
            rotateAt(arr,j);
            result.push_back(j+1);
            j--;
        }
      return result ;
    }
};
