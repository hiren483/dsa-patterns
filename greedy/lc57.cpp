class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n = intervals.size();
        vector<vector<int>> ans;
        bool inserted = false;
        for(int i = 0 ; i < n; i++){
            if(intervals[i][1]<newInterval[0]){
                ans.push_back(intervals[i]);
            }
            else if(intervals[i][0]>newInterval[1]){
                if(!inserted){
                    ans.push_back(newInterval);
                    inserted = true;
                }
                ans.push_back(intervals[i]);
            }
            else{
                newInterval[0] = min(intervals[i][0],newInterval[0]);
                newInterval[1] = max(intervals[i][1],newInterval[1]);
            }

        }
        if(!inserted)
        ans.push_back(newInterval);
        return ans;
    }
};

