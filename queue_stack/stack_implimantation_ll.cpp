#include<iostream>
#include<list>
using namespace std;


class stack{
    list<int> ll;
    
public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
       return ll.front();
    }
    bool empty(){
        return ll.size()==0;
    }


}


int main(){



}
