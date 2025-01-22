#include<iostream>
using namespace std;

//Value of nth fibonacci number = Value of (n-1)th number + Value of (n-2)th number
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}

//Time Complexity: O(2^N)
//Space Complexity: O(N)