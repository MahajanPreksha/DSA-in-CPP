#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void squaresOfSortedArray(vector<int>& v, int n, vector<int>& res){
    int left_ptr = 0, right_ptr = n - 1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            res.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            res.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }
    reverse(res.begin(), res.end());
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> res;
    squaresOfSortedArray(v, n, res);
    for(int i=0; i<n; i++){
        cout<<res[i]<<" ";
    }
    return 0;
}