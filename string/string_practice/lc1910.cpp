#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {
        int pos = 0;
        while(true){
            if((pos = s.find(part)) != string::npos){
                s.erase(pos, part.length());
            }
            else break;
        }        
        return s;
    
}


int main(){
 
}
