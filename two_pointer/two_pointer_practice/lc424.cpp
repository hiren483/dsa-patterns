#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int characterReplacement(string s, int k) {
          int l = 0 , n = s.size() ,count = 0;
          vector<int> mp(26,0);
          int ans = 0 ;
          int max_freq = 0;
          if(n==1)return 1;
          for(int r = 0; r< n ; r++){
            mp[s[r]-'A']++;
            max_freq = max(max_freq , mp[s[r]-'A']);
            while((r - l + 1) - max_freq>k && l<r){
                mp[s[l]-'A']--;
                l++;
            } 
            ans = max (ans ,r-l+1);
          } 
          return ans ;
    }

int main(){
    

}
