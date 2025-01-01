#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int largestEleIndex(vector<int> array, int size){
    int max = INT_MIN;
    int maxIndex = -1;
    for(int i=0; i<size; i++){
        if(max<array[i]){
            max = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int main(){
    int size;
    cin>>size;
    vector<int> array(size);
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    int largestIndex = largestEleIndex(array, size);
    int largestElement = array[largestIndex];
    for(int i=0; i<size; i++){
        if(array[i]==largestElement){
            array[i] = -2345;
        }
    }
    int indexOfSecLargest = largestEleIndex(array, size);
    cout<<array[indexOfSecLargest];
    return 0;
}