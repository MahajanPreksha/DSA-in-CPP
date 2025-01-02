#include <iostream>
using namespace std;

int main(){
    // Methods to initialise a 2-D Array
    // Method 1
    int arr[2][2] = {1, 2, 3, 4};

    // Method 2
    int ar[2][2] = {{1, 2}, {3, 4}};

    // Method 3
    int a[2][2];
    a[0][0] = 1, a[0][1] = 2, a[1][0] = 3, a[1][1] = 4;

    // Taking input in 2D Array
    int n, m;
    cin>>n>>m;
    int arrr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arrr[i][j];
        }
    }

    //Printing 2D Array
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<arrr[i][j];
        }
    }
    return 0;
}