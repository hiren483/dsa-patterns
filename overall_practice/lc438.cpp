#include<iostream>
using namespace std;

bool isvalid(string& p , unordered_map<int, int>& mp){
    for(w : p){
        if(mp[w - a]!= 1){return false;}
    }
    return true;
}

vector<int> findAnagrams(string s, string p) {
        int l = 0, r = 0;
        int w = p.size();
        unordered_map<int, int> mp;
        vector<int> ans ;
        for(int i = 0; i< w ; i++){
            mp[s[i]- 'a']++;
        }
        while(r != s.size()-1){
            if(isvalid(p,mp)){
                ans.push_back(l);
            }
            l++;
            mp[s[l]-'a']--;
            r++;
            mp[s[r]-'a']++;
        }
        return ans ;
    }

int main(){
    
}
