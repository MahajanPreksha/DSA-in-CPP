#include<iostream>
using namespace std;

int sumOfDigits(int n){
    if(n==0){ //Base Case
        return 0;
    }
    return n%10 + sumOfDigits(n/10); //Assumption + Self-work
}

int main(){
    int n;
    cin>>n;
    cout<<sumOfDigits(n);
    return 0;
}

/* Base Case: If you have a single digit number i.e. n>=0 and n<=9, then the sum of digits will be the number itself.
Assumption: We will assume that the function works correctly for n/10.
Self Work: We will add the last digit of the number to the sum of digits of the remaining number.

Time Complexity: O(log N) where N is the number of digits in the number.
Space Complexity: O(log N) where N is the number of digits in the number. */