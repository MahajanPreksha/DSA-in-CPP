#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int m, n;
    cin>>m>>n;
    vector<int> v1(m);
    vector<int> v2(n);
    for(int i=0; i<m; i++){
        cin>>v1[i];
    }
    for(int i=0; i<n; i++){
        cin>>v2[i];
    }
    int ans_sum = 0;
    set<int> set1;
    for(auto ele:v1){
        set1.insert(ele);
    }
    for(auto ele:v2){
        if(set1.find(ele)!=set1.end()){
            ans_sum +=ele;
        }
    }
    cout<<"Answer: "<<ans_sum<<endl;
    return 0;
}
//Time Complexity: (n+m)log t where t = number of unique elements