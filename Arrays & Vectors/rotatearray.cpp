#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 7;
    int array[n] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    k = k % n;
    int ansArray[n];
    int j = 0;
    for(int i=n-k; i<n; i++){
        ansArray[j++] = array[i];
    }
    for(int i=0; i<n-k; i++){
        ansArray[j++] = array[i];
    }
    for(int i=0; i<n; i++){
        cout<<ansArray[i]<<" ";
    }
    return 0;
}

//Output: 5 6 7 1 2 3 4