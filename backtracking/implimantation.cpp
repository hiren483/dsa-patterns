#include<iostream>
using namespace std;

    vector<vector<int>> res;

    void backtrack(int idx, vector<int>& nums, vector<int>& curr) {
        // Every state is a valid subset
        
        res.push_back(curr);

        for (int i = idx; i < nums.size(); i++) {
            curr.push_back(nums[i]);          // take 
            backtrack(i + 1, nums, curr);    // move forward
            curr.pop_back();                 // undo (backtrack)
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        backtrack(0, nums, curr);
        return res;
    }

int main(){
    
}
