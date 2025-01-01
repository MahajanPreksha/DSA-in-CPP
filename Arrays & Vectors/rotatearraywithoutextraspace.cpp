#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array)/sizeof(array[0]);
    int k = 2;
    k = k % n;
    reverse(array, array+n);
    reverse(array, array+k);
    reverse(array+k, array+n);
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}

//Output: 3 4 5 1 2