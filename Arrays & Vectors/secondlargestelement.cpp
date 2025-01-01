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

int secondMax(vector<int> array, int size){
    int maxi = INT_MIN;
    int secMaxi = INT_MIN;
    for(int i=0; i<size; i++){
        if(maxi<array[i]){
            maxi = array[i];
            secMaxi = maxi;
        }
        else if(array[i]>secMaxi && array[i]!=maxi){
            secMaxi = array[i];
        }
    }
    return secMaxi;
}

int main(){
    int size;
    cin>>size;
    vector<int> array(size);
    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    //Method 1
    int largestIndex = largestEleIndex(array, size);
    array[largestIndex] = -2345;
    int indexOfSecLargest = largestEleIndex(array, size);
    cout<<array[indexOfSecLargest]<<endl;

    //Method 2
    cout<<secondMax(array, size);
    return 0;
}