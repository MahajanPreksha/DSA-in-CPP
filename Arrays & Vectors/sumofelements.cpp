#include<iostream>
using namespace std;

int main(){
    int array[] = {3, 4, 5, 6, 9};
    int sum = 0;
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size; i++){
        sum +=array[i];
    }
    cout<<sum<<endl; //27
    return 0;
}