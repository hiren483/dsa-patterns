#include<iostream>
#include<list>
using namespace std;

private:
    queue<int> q1, q2;

public:
    MyStack() {}

    void push(int x) {
        // Step 1: push x to q2
        q2.push(x);

        // Step 2: move everything from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        // Step 3: swap q1 and q2
        swap(q1, q2);
    }

    int pop() {
        int topElement = q1.front();
        q1.pop();
        return topElement;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};


int main(){
    stack<int> s;
}