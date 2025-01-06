#include<iostream>
using namespace std;

int const N = 1e3;

void deleteInMinHeap(int minHeap[], int &size){
    minHeap[1] = minHeap[size];
    size--;
    int curr = 1;
    while(2*curr<=size){ //Looping till curr node has child nodes
        int leftChild = 2 * curr;
        int rightChild = 2 * curr + 1;
        int minChild = leftChild;
        if(rightChild<=size && minHeap[rightChild]<minHeap[leftChild]){
            minChild = rightChild;
        }
        if(minHeap[minChild]>=minHeap[curr]){
            return;
        }
        swap(minHeap[minChild], minHeap[curr]);
        curr = minChild;
    }
}

int main(){
    int minHeap[N] ={-1, 5, 20, 10, 40, 50, 30, 60};
    int size = 7;
    int value = 5;
    deleteInMinHeap(minHeap, size);
    for(int i=0; i<=size; i++){
        cout<<minHeap[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*  We can only delete the root node from a heap.
    Time Complexity: O(log N) in worst case
    Space Complexity: O(1)
*/