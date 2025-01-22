#include<iostream>
using namespace std;

//Method 1: Iterative Solution
int fact(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans *= i;
    }
    return ans;
}

//Time Complexity: O(N)
//Space Complexity: O(1)

//Method 2: Recursive Solution
int factorial(int n){
    if(n==0 || n==1){ //Base Case/Halting Condition
        return 1;
    }
    return n * factorial(n - 1); //Self-work based upon Assumption
}

//Time Complexity: O(N)
//Space Complexity: O(N)

int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<factorial(n)<<endl;
    return 0;
}