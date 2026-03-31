#include<iostream>
using namespace std;

void backtrack(int start ,int n, int k,vector<int>& curr,vector<vector<int>>& allcombinations){

    if(curr.size()==k){
        allcombinations.push_back(curr);
        return;
    }
    for(int i = start ; i <= n ; i++){
        curr.push_back(i);
        backtrack(i+1,n , k , curr , allcombinations); 
        curr.pop_back();
    }

}

vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> allcombinations;
        vector<int> curr;
        backtrack(1,n , k , curr , allcombinations );
        return allcombinations;
    }

int main(){
    
}
