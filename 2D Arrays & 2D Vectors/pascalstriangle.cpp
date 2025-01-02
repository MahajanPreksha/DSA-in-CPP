#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascal(int numRows){
    vector<vector<int>> ret;
    for(int i=0; i<numRows; i++){
        vector<int> row(i+1, 1);
        for(int j=1; j<i; j++){
            row[j] = ret[i-1][j] + ret[i-1][j-1];
        }
        ret.push_back(row);
    }
    return ret;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans;
    ans = pascal(n);
    for (int i=0; i<ans.size(); i++){
        for (int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*Important Points:
1. Number of columns = Row number
2. a[i][j] = C(i, j) */