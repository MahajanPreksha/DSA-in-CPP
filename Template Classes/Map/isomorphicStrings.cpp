#include<iostream>
#include<unordered_map>
using namespace std;
bool checkIsomorphic(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    unordered_map<char, char> mp;
    //Checking one-to-many mapping from s1 -> s2
    for(int i=0; i<s1.length(); i++){
        if(mp.find(s1[i])!=mp.end()){
            if(mp[s1[i]]!=s2[i]){
                return false;
            }
        }
        else{
            mp[s1[i]] = s2[i];
        }
    }
    mp.clear();
    //Checking one-to-many mapping from s2 -> s1
    for(int i=0; i<s2.length(); i++){
        if(mp.find(s2[i])!=mp.end()){
            if(mp[s2[i]]!=s1[i]){
                return false;
            }
        }
        else{
            mp[s2[i]] = s1[i];
        }
    }
    return true;
}
int main(){
    string s1, s2;
    cin>>s1>>s2;
    cout<<checkIsomorphic(s1, s2)<<endl;
    return 0;
}
//Time Complexity: O(N) where N = Sum of lengths of s1 and s2
//Space Complexity: O(N) where N = Number of unique characters in s1 and s2