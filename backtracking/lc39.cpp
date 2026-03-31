#include<iostream>
using namespace std;

void backtrack(int start,
               vector<int>& candidates,
               int target,
               vector<int>& curr,
               int curr_sum,
               vector<vector<int>>& allcombinations) {

    if (curr_sum == target) {
        allcombinations.push_back(curr);
        return;
    } 

    if (curr_sum > target) {
        return;
    }

    for (int i = start; i < candidates.size(); i++) {
        curr.push_back(candidates[i]); //include
        backtrack(i, candidates, target, curr,
                  curr_sum + candidates[i],
                  allcombinations);
        curr.pop_back();//exclude
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());

    vector<vector<int>> allcombinations;
    vector<int> curr;

    backtrack(0, candidates, target, curr, 0, allcombinations);
    return allcombinations;
}


int main(){
    
}
