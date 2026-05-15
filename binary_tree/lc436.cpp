class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<int,int>> starts;//store starts and their positions
        for(int i=0;i<n;i++){
            starts.push_back({intervals[i][0],i});
        }
        //sort 
        sort(starts.begin(),starts.end());
        vector<int> ans(n);

        for(int i =0;i<n;i++){
            int target = intervals[i][1];
            int low = 0;
            int high = n-1;
            int idx = -1;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(target<=starts[mid].first){
                    idx = starts[mid].second;
                    high = mid -1;
                }
                else{
                    low = mid +1;
                }
            }
            ans[i]=idx;
        }
        return ans;
    }
};