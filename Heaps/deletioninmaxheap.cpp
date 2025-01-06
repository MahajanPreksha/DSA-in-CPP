#include<iostream>
using namespace std;

int const N = 1e3;

void deleteInMaxHeap(int maxHeap[], int &size){
    maxHeap[1] = maxHeap[size];
    size--;
    int curr = 1;
    while(2*curr<=size){ //Looping till curr node has child nodes
        int leftChild = 2 * curr;
        int rightChild = 2 * curr + 1;
        int maxChild = leftChild;
        if(rightChild<=size && maxHeap[rightChild]>maxHeap[leftChild]){
            maxChild = rightChild;
        }
        if(maxHeap[maxChild]<=maxHeap[curr]){
            return;
        }
        swap(maxHeap[maxChild], maxHeap[curr]);
        curr = maxChild;
    }
}

int main(){
    int maxHeap[N] ={-1, 60, 50, 40, 30, 20, 10, 5};
    int size = 7;
    int value = 5;
    deleteInMaxHeap(maxHeap, size);
    for(int i=0; i<=size; i++){
        cout<<maxHeap[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*  We can only delete the root node from a heap.
    Time Complexity: O(log N) in worst case
    Space Complexity: O(1)
*/