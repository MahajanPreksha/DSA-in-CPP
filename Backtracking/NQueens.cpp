#include<iostream>
#include<vector>
using namespace std;
bool canPlaceQueen(int row, int col, vector<vector<char>> &grid){
    //Is someone attacking from vertical up
    for(int i=row-1; i>=0; i--){
        if(grid[i][col]=='Q'){
            return false;
        }
    }
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
        if(grid[i][j]=='Q'){
            return false;
        }
    }
    for(int i=row-1, j=col+1; i>=0 && j<grid.size(); i--, j++){
        if(grid[i][j]=='Q'){
            return false;
        }
    }
    return true;
}
void NQueen(int currRow, int n, vector<vector<char>> &grid){
    if(currRow==n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"**\n";
    }
    for(int col=0; col<n; col++){
        //We'll go to all the columns
        //Check if we can place a queen at current Row and Column
        if(canPlaceQueen(currRow, col, grid)){
            grid[currRow][col] = 'Q';
            NQueen(currRow+1, n, grid);
            grid[currRow][col] = '.';
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<vector<char>> grid(n, vector<char> (n, '.'));
    NQueen(0, n, grid);
    return 0;
}