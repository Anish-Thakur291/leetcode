class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>t;
        for(int i=0;i<tickets.size();i++){
            t.push(i);
        }
        int timeneed=0;
            while(!t.empty()){
                timeneed++;
                int fi=t.front();
                t.pop();
                tickets[fi]--;
                if(fi==k && tickets[fi]==0){
                    return timeneed;

                }
                if(tickets[fi]!=0){
                    t.push(fi);
                }

            }
        
          return timeneed;
    }
};