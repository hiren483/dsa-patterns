#include<iostream>
using namespace std;


int ans = 0;

void backtrack(int idx, string &s, unordered_set<string> &used) {
    ans = max(ans, (int)used.size());

    for (int i = idx; i < s.size(); i++) {
        string sub = s.substr(idx, i - idx + 1);
        if (used.count(sub)) continue;

        used.insert(sub);
        backtrack(i + 1, s, used);
        used.erase(sub);
    }
}

int maxUniqueSplit(string s) {
    unordered_set<string> used;
    backtrack(0, s, used);
    return ans;
}


int main(){
    
}
