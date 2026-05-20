class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<int> pq;
        vector<string> ans(n,"");
        map<int,int> mp;
        for(int i = 0 ; i < n;i++){
            mp[score[i]] = i;
        }
        for(int i = 0 ; i<n ; i++){
            pq.push(score[i]);
        }
        int rank = 1;
        while(!pq.empty()){
            int x = pq.top();
            pq.pop();
            int idx = mp[x];
            if(rank == 1){
                ans[idx] = "Gold Medal";
            }
            else if(rank == 2){
                ans[idx] = "Silver Medal";
            }
            else if(rank == 3){
                ans[idx] = "Bronze Medal";
            }
            else{
                ans[idx] = to_string(rank);
            }
            rank++;
        }
        return ans;

    }
};