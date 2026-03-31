#include <iostream>
using namespace std;

string reverseWords(string s) {
        vector<string> v;
        int j = 0;
        for(int i = 0; i<s.length();i++){
            if(s[i]==' ' && i != 0 && i != s.length()-1){
                v.push_back(s.substr(j,i-j));
                j = i+1;
            }
        }
        string ans = 0;
        for(int i =v.size()-1; i>=0;i--){
            ans = ans + v[i];
        }
        return ans;
    }

int main(){
 
}
