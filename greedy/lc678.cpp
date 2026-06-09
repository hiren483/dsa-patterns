class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0;
        int maxOpen = 0;

        for(char ch : s){

            if(ch == '('){
                minOpen++;
                maxOpen++;
            }

            else if(ch == ')'){
                minOpen--;
                maxOpen--;
            }

            else{ // '*'
                minOpen--; // if '*' acts as ')'
                maxOpen++; // if '*' acts as '('
            }

            // too many closing brackets
            if(maxOpen < 0){
                return false;
            }

            // minOpen can never be negative
            // because '*' can become empty
            if(minOpen < 0){
                minOpen = 0;
            }
        }

        return minOpen == 0;
    }
};