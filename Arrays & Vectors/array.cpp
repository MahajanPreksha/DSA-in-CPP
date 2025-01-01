#include<iostream>
using namespace std;

int main(){
    //Declaring and initialising an array
    int array[] = {1, 2, 3, 4, 5};

    //Size of array
    cout<<sizeof(array)<<endl; //20

    //Length of array
    cout<<sizeof(array)/sizeof(array[0])<<endl; //5

    //Accessing elements of array or Traversing array
    //First way: Using index
    cout<<array[0]<<endl; //1

    //Second way: Using loops
    //For Loop
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<5; i++){ // i --> index
        cout<<array[i]<<" "; //1 2 3 4 5
    }
    cout<<endl;

    //For each Loop
    for(int ele:array){
        cout<<ele<<" "; //1 2 3 4 5
    }
    cout<<endl;

    //While Loop
    int idx = 0;
    while(idx<size){
        cout<<array[idx]<<" "; //1 2 3 4 5
    }
    cout<<endl;

    //Taking input in an array --> Using loops
    //For Loop
    char vowels_1[5];
    for(int i=0; i<5; i++){
        cin>>vowels_1[i];
    }

    //For each loop
    char vowels_2[5];
    for(char& e:vowels_2){
        cin>>e;
    }

    return 0;
}