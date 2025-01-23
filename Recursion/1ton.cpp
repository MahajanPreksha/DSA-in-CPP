#include<iostream>
using namespace std;

void f(int n){ //This function prints the first n natural numbers.
    if(n==0){ //Base Case
        return;
    }
    f(n-1); //Assume that the function works correctly for n-1.
    cout<<n<<" "; //Self-work
}

int main(){
    int n;
    cin>>n;
    f(n);
    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(n)