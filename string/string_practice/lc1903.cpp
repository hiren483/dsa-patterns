#include <iostream>
using namespace std;

string largestOddNumber(string num) {
        int index = -1; 
        for(int i = 0 ; i< num.length(); i++){
            if(int(num[i])%2 != 0){
                index = i ;
            }
        }
        return num.substr(0 , index);
    }

int main(){
 
}
