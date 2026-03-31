#include <iostream>
using namespace std;
/*LL functins: push_front,push_back,pop_front,pop_back */
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = nullptr;
    }

    void push_front(int val) {
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode ;
            return ;
        }
        else {
            newNode-> next = head ; // (*newNode).next = head; (go to newNode pointer ans assign its next = head)
            head = newNode ;           
        }
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == tail){
            head = tail = newNode ;
        } 
        else {
            tail->next = newNode ;
            tail = newNode ;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout<<"LL is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL ;
        delete temp ;          
    }

    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
             temp = temp->next ;
        }
        temp->next = NULL ;
        delete tail;
        tail = temp;
    }
    void insert(int val , int index){
        if(index<0){
            cout<<"invalid position"<<endl;
            return;
        }
        if(index == 0){
             push_front(val);
        }
        else{
        Node* newNode = new Node(val);
        Node* temp = head;
        int count = 0;
        while(count != index-1){
            if(temp == NULL){
                cout<<"invalid position"<<endl;
                return ;
            }
            temp = temp->next;
            count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        } 
    }
    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }  
            temp = temp->next ;
            idx ++ ;
            
        }
        return -1;
    }
    void printll(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl; 
    }

};
 
int main() {
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.printll();
    ll.pop_front();
    ll.printll();
    ll.pop_back();
    ll.printll();
    ll.insert(10 , 1);
    ll.printll();
    cout<<ll.search(10)<<endl;
}
