#include<iostream>
#include<deque>
using namespace std;

//double ended queue (access to both , front and end)
int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(4); // 4 1 2 3

    cout<<dq.front<<" "<<dq.back()<<endl ;

}
