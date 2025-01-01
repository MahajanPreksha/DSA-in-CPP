#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortZeroesAndOnes(vector<int>& v, int n){
    int low = 0;
    int high = n - 1;
    while(low<high){
        if(v[low]==1){
            swap(v[low], v[high]);
            low++;
            high--;
        }
        else if(v[low]==0){
            low++;
        }
        else if(v[high]==1){
            high--;
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