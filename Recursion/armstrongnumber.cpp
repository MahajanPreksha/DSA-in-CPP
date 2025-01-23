#include<iostream>
using namespace std;

int power(int p, int q){
    if(q==0){
        return 1;
    }
    if(q%2==0){
        int res = power(p, q/2);
        return res * res;
    }
    else{
        int res = power(p, (q-1)/2);
        return p * res * res;
    }
}

int armstrong(int n, int d){
    if(n==0){ //Base Case
        return 0;
    }
    return power(n%10, d) + armstrong(n/10, d); //Assumption + Self-work
}

int main(){
    int n;
    cin>>n;
    int d = 0; //Number of digits in the original number
    int temp = n;
    while(temp>0){
        temp = temp/10;
        d++;
    }
    int ans = armstrong(n, d);
    if(ans==n){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}

//Time Complexity: O(log N)
//Space Complexity: O(log N)