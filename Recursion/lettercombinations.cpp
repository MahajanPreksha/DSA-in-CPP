#include<iostream>
#include<vector>
#include<string>
using namespace std;

void f(string& s, int i, string result, vector<string> &li, vector<string> &v){
    if(i==s.size()){
        li.push_back(result);
        return;
    }
    int digit = s[i] - '0';
    if(digit<=1){
        f(s, i+1, result, li, v);
        return;
    }
    for(int j=0; j<v[digit].size(); j++){
        f(s, i+1, result+v[digit][j], li, v);
    }
    return;
}

int main(){
    vector<string> v(10);
    v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string s;
    cin>>s;
    vector<string> li;
    f(s, 0, "", li, v);
    for(int i=0; i<li.size(); i++){
        cout<<li[i]<<" ";
    }
    return 0;
}

//Time Complexity: O(n * 4^n)
//Space Complexity: O(n * 4^n)