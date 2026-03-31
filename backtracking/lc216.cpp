#include<iostream>
using namespace std;

void backtrack(int start , int k, int n ,vector<vector<int>>& allcombinations ,vector<int>& curr ){
    if(curr.size()==k){
        int sum = 0;
        for(int i = 0; i<k;i++){
            sum += curr[i];
        }
        if(sum==n){
            allcombinations.push_back(curr);
        }
        return;
    }
    for(int i = start ; i < 10 ; i++){
        curr.push_back(i);
        backtrack(i+1 , k ,n ,allcombinations ,curr);
        curr.pop_back();
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> allcombinations ;
        vector<int> curr ;
        backtrack(1 , k ,n ,allcombinations ,curr);
        return allcombinations;
    }

int main(){
    vector<vector<int>> combinationSum3(2 ,9);
}
