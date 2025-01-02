#include<iostream>
#include<climits>
#include<vector>
using namespace std;

//Method 1
int maxOnesRow(vector<vector<int>>& arr, int n, int m){
    int maxOnes = INT_MIN;
    int maxOnesRowNo = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==1){
                int count = m - j;
                if(count>maxOnes){
                    maxOnes = count;
                    maxOnesRowNo = i;
                }
                break;              
            }
        }
    }
    return maxOnesRowNo;
}

//Method 2
int maxOnesRowNumber(vector<vector<int>>& arr, int n, int m){
    int leftMostOne = -1;
    int maxOnesRow  = -1;
    int j = m - 1;
    //Find leftmost one in 0th row
    while(j>=0 && arr[0][j]==1){
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }

    //Check for remaining rows if we can find a one in the left of the leftmost one
    for(int i=0; i<n; i++){
        while(j>=0 && arr[i][j]==1){
            leftMostOne = j;
            maxOnesRow = i;
            j--;
        }
    }
    return maxOnesRow;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int> (m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    int maxOnes_1 = maxOnesRow(arr, n, m);
    cout<<maxOnes_1<<endl;
    int maxOnes_2 = maxOnesRowNumber(arr, n, m);
    cout<<maxOnes_2<<endl;
    return 0;
}