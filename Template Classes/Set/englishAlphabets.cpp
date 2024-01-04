#include<iostream>
#include<vector>
#include<set>
#include <algorithm>
using namespace std;
bool checkAllAphabets(string s){
    if(s.length()<26){
        return false;
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> alphabets;
    for(auto ch:s){
        alphabets.insert(ch);
    }
    return alphabets.size()==26;
}
int main(){
    string input;
    cin>>input;
    cout<<checkAllAphabets(input)<<endl;
}