#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int numberOfSubstrings(string s) {
        int l = 0;
        int n = s.size();
        vector<int> mp(3 , 0);
        int count = 0;
        for(int r= 0 ; r< n ; r++){
            mp[s[r]-'a']++;
            while((s[0]>0 && s[1]>0 && s[2]>0)){
                count += n - r ;
                mp[s[l]-'a']--;
                l++;
            }
            
        }
        return count;
    }

int main(){
    

}
