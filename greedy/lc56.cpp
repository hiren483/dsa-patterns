class Solution {
public:

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans ;
        if(intervals.empty()){
            return {};
        }
        sort(intervals.begin(),intervals.end());
        int current_start = intervals[0][0];
        int current_end = intervals[0][1];
        for(int i=1; i< n ; i++){
            if(intervals[i][0]>current_end){
                ans.push_back({current_start,current_end});
                current_start = intervals[i][0];
                current_end = intervals[i][1];
            }
            else{
                current_start = min(current_start,intervals[i][0]);
                current_end = max(current_end,intervals[i][1]);
            }
        }
        ans.push_back({current_start,current_end});
        return ans;
    }
}; f