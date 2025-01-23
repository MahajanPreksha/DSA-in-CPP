#include<iostream>
using namespace std;

//Method 1: Iterative Solution
bool f1(int n){
    if(n<0){
        return false;
    }
    int temp = n;
    int rev = 0;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp /=10;
    }
    return rev==n;
}

//Time Complexity: O(N)
//Space Complexity: O(1)

//Method 2: Recursive Solution
bool f2(int num, int *temp){ //This function checks if number is palindrome or not by reading num from left to right and temp from right to left.
    if(num>=0 && num<=9){
        int lastDig = (*temp)%10;
        (*temp) /=10;
        return (num==lastDig);
    }
    bool result = (f2(num/10, temp) && (num%10)==((*temp)%10));
    (*temp) /=10;
    return result;
}

//Time Complexity: O(N)
//Space Complexity: O(N)

int main(){
    int num;
    cin>>num;
    int anotherNum = num;
    int *temp = &anotherNum;
    cout<<f1(num)<<endl;
    cout<<f2(num, temp);
    return 0;
}