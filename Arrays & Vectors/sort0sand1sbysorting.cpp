#include<iostream>
#include<vector>
using namespace std;

void sortZeroesAndOnes(vector<int>& v, int n){
    int zeroes_count = 0;
    for(int i:v){
        if(i==0){
            zeroes_count++;
        }
    }
    for(int i=0; i<n; i++){
        if(i<zeroes_count){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sortZeroesAndOnes(v, n);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}