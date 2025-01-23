#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void f(string &s, int i, string result, vector<string> &res){
    if(i==s.length()){
        res.push_back(result);
    }
    f(s, i+1, result+s[i], res);
    f(s, i+1, result, res);
}

int main(){
    string s;
    cin>>s;
    vector<string> res;
    f(s, 0, "", res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i];
    }
    return 0;
}

//Time Complexity: O(2^n)
//Space Complexity: O(2^n)