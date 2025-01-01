#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[5] = {3, 4, 2, 1, 5};
    int max = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max; //5
    return 0;
}