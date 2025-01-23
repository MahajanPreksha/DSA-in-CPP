#include<iostream>
using namespace std;

void f(int n, int k){ //This function prints first k multiples of n in increasing order.
    if(k==0){
        return;
    }
    f(n, k-1); //Assume that the function works for k-1 multiples of n.
    cout<<n*k<<" "; //Self-work
}

int main(){
    int n, k;
    cin>>n>>k;
    f(n, k);
    return 0;
}

//Time Complexity: O(N)
//Space Complexity: O(N)