#include <iostream>
using namespace std;

int main(){
    int array[] = {3, 1, 2, 4, 0, 6};
    int targetSum = 5;
    int n = sizeof(array)/sizeof(array[0]);
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(array[i]+array[j]+array[k]==targetSum){
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}