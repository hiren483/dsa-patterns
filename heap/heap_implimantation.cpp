#include<iostream>
#include<vector>
using namespace std;

class heap{

    public:
        vector<int> arr;
        int size;

        heap(){
            arr.push_back(-1); // same as arr[0] = -1
            size = 0; 
        }

        void insert(int val){
            size = size + 1;
            int index = size;

            arr.push_back(val); // instead of arr[size] = val

            while(index > 1){
                int parent = index / 2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }
        void deletefromheap(){
            if(size==0){
                cout<<"nothing to delete"<<endl;
                return;
            }
            while(index<size){
                int leftindex = 2*i;
                int rightindex = 2*i + 1 ;
                
            }
        }

        void print(){
            for(int i = 1; i <= size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    
}