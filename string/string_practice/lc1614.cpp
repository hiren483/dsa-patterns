#include <iostream>
using namespace std;

int maxDepth(string s) {
        int maximum = 0;
        int current = 0;
        for(int i =0; i<s.length() ; i++){
            if(s[i]=='('){
                current++;
                maximum = max(maximum,current);
            }
            if(s[i]==')'){
                current--;  
            }
        }
        return maximum;
    }

int main(){
 
}
