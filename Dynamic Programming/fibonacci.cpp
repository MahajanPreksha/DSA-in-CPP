#include<iostream>
#include<vector>
using namespace std;

//Using Recursion
int f(int n){
    if(n==0 || n==1){
        return n;
    }
    return f(n-1) + f(n-2);
}

//Using Dynamic Programming - Memoization
vector<int> dp; //dp array -> it will store ans for states which are computed for the first time
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] = fibo(n-1) + fibo(n-2);
}
//dp[i] = -1 --> ith state is not computed yet
//dp[i] != -1 --> ith state is pre-computed

//Using Dynamic Programming - Tabulation
int fib(int n){
    vector<int> dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    dp.resize(n+1, -1);
    cout<<f(n)<<endl;
    cout<<fibo(n)<<endl;
    cout<<fib(n)<<endl;
    return 0;
}