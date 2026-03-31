#include<iostream>
using namespace std;

int balancedString(string s) {
        int n = s.size();
        vector<int> v(26, 0);

        for(int i = 0; i< n ; i++){
            v[s[i]-'A']++ ;
        }
        int ans = 0;
        for(int i = 0 ; i < 26 ; i++){
            if(v[i]>n/4){
                ans += v[i]-n/4 ;
            }
        }
        return ans ;
    }

int main(){
    
}
