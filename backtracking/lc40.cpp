#include<iostream>
using namespace std;

void backtrack(int start,vector<int>& candidates,vector<int>& curr,int target,vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            if (i > start && candidates[i] == candidates[i - 1]) continue;

            if (candidates[i] > target) break;

            curr.push_back(candidates[i]);

            backtrack(i + 1, candidates, curr, target - candidates[i], ans);

            curr.pop_back(); 
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> curr;

        backtrack(0, candidates, curr, target, ans);

        return ans;
    }

int main(){
    
}
