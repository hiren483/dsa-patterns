#include<iostream>
#include<string>
#include<vector>
using namespace std;

void backtrack(int index ,vector<string>& allcombinations,string& curr,string& digits,unordered_map<char,string>& mp){
        if(curr.size()==digits.size()){
            allcombinations.push_back(curr);
            return;
        }
        string letters = mp[digits[index]];

        for(char ch: letters){
           curr.push_back(ch);
           backtrack(index+1 ,allcombinations,curr,digits,mp);
           curr.pop_back();
        }
}

vector<string> letterCombinations(string digits) {
        unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        vector<string> allcombinations;
        string curr;
        backtrack(0 ,allcombinations,curr,digits,mp);
        return allcombinations;
    }

int main(){
    vector<vector<int>> combinationSum3(2 ,9);
}
