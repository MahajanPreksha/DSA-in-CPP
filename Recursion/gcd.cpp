#include<iostream>
using namespace std;

int f(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    return f(b, a%b);
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<f(a, b);
    return 0;
}

/* Euclid's Algorithm: If we subtract a smaller number from a larger one, we can reduce the larger number but the GCD will not change.
So if we keep subtracting repeatedly the larger of the two, we end up with GCD.

Time Complexity: O(log(min(a, b)))
Space Complexity: O() */