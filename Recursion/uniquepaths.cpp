#include<iostream>
using namespace std;

int f(int n, int m, int i, int j){ //This function returns number of ways to reach m-1, n-1 from i, j if we can only move right and down.
    if(i==n-1 && j==m-1){ //Base Case 1: If we reach the destination, return 1.
        return 1;
    }
    if(i>=n || j>=m){ //Base Case 2: If we go out of bounds, return 0.
        return 0;
    }

    //Assumption: Assume that function works correctly to give number of ways to reach bottom right from down and right cells.
    return f(n, m, i+1, j) + f(n, m, i, j+1); //Assumption + Self-work
}

int main(){
    int n, m;
    cin>>n>>m;
    cout<<f(n, m, 0, 0);
    return 0;
}

//Time Complexity: O(2^(n+m))
//Space Complexity: O(n*m)