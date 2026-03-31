class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n = nums.size();

        vector<int> new_num = nums;
        new_num.insert(new_num.end(), nums.begin(), nums.end());

        vector<int> ans(2*n);

        for(int i = 2*n - 1; i >= 0; i--){
            while(!s.empty() && s.top() <= new_num[i]){
                s.pop();
            }

            if(s.empty()){
                ans[i] = -1;
            } else {
                ans[i] = s.top();
            }

            s.push(new_num[i]);
        }

        vector<int> sub_ans;
        for(int i = 0; i < n; i++){
            sub_ans.push_back(ans[i]);
        }

        return sub_ans;
    }
};