#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class heap {

public:
    vector<int> arr;
    int size;

    heap() {

        // Using 1-based indexing:
        // parent = i/2
        // left child = 2*i
        // right child = 2*i+1
        // So arr[0] is dummy.
        arr.push_back(-1);

        size = 0;
    }

    void insert(int val) {

        size++;
        int index = size;

        // add element at end
        // complete binary tree property stays intact
        arr.push_back(val);


        // Heap property may break:
        // keep moving upward until parent becomes larger
        while(index > 1){

            int parent = index/2;

            if(arr[parent] < arr[index]){

                swap(arr[parent],arr[index]);

                // now continue checking upward
                index = parent;
            }
            else{
                return;
            }
        }
    }


    void deletefromheap(){

        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }


        // Max heap deletion always removes root
        // Step 1:
        // Replace root with last node

        arr[1] = arr[size];


        // Step 2:
        // Remove last node
        arr.pop_back();
        size--;


        // Step 3:
        // Push root downward until heap property restored

        int i = 1;

        while(i<=size){

            int left=2*i;
            int right=2*i+1;

            int largest=i;


            // Find largest among:
            // current node + children

            if(left<=size && arr[left]>arr[largest]){
                largest=left;
            }

            if(right<=size && arr[right]>arr[largest]){
                largest=right;
            }


            // If root is not largest,
            // swap and continue downward

            if(largest!=i){

                swap(arr[i],arr[largest]);

                i=largest;
            }

            else{
                return;
            }
        }
    }


    void print(){

        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
};



// Heapify repairs heap assuming
// left and right subtrees are already heaps
void heapify(int arr[],int n,int i){

    int largest=i;

    int left=2*i;
    int right=2*i+1;


    // choose biggest among parent and children

    if(left<=n && arr[left]>arr[largest]){
        largest=left;
    }

    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }


    // if parent is not largest,
    // swap and recursively repair subtree

    if(largest!=i){

        swap(arr[i],arr[largest]);

        heapify(arr,n,largest);
    }
}

void heapsort(int arr[],int n){
    int size = n;
    while(size>1){
        //step 1: swap
        swap(arr[size],arr[1]);
        size--;
        //step 2: sahi jagya e 
        heapify(arr,size,1);
    }

}

int main(){

    heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout<<"Heap:"<<endl;
    h.print();



    h.deletefromheap();

    cout<<"After deletion:"<<endl;
    h.print();



    // Complete Binary Tree
    // convert → Max Heap

    int arr[6]={-1,54,53,55,52,50};

    int n=5;


    // leaf nodes already satisfy heap property
    // so start from last non-leaf node

    for(int i=n/2;i>0;i--){

        heapify(arr,n,i);
    }

    cout<<"Heapified array:"<<endl;

    for(int i=1;i<=n;i++){

        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // ---------------- MAX HEAP ----------------
    // By default priority_queue in C++ is a max heap
    // Largest element always stays at top

    priority_queue<int> pq;

    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Top element: "<<pq.top()<<endl;
    // Output: 5


    pq.pop();   // removes largest element

    cout<<"Top after pop: "<<pq.top()<<endl;
    // Output: 4



    // size() → number of elements

    cout<<"Size: "<<pq.size()<<endl;



    // empty() → checks whether queue is empty

    if(pq.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }



    // Print all elements
    // (copying because pop destroys queue)

    priority_queue<int> temp = pq;

    cout<<"Elements in max heap: ";

    while(!temp.empty()){

        cout<<temp.top()<<" ";

        temp.pop();
    }

    cout<<endl;



    // ---------------- MIN HEAP ----------------

    // Syntax:
    // priority_queue<data_type,
    //                container,
    //                comparator>

    // greater<int> converts max heap → min heap

    priority_queue<int, vector<int>, greater<int>> minHeap;


    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);


    // smallest element always stays at top

    cout<<"Min heap top: "<<minHeap.top()<<endl;
    // Output: 2


    minHeap.pop();

    cout<<"After pop: "<<minHeap.top()<<endl;
    // Output: 3



    cout<<"Elements in min heap: ";

    while(!minHeap.empty()){

        cout<<minHeap.top()<<" ";

        minHeap.pop();
    }

    cout<<endl;


    return 0;
}