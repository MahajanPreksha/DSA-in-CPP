#include<iostream>
#include<unordered_map>
using namespace std;
bool anagram(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    unordered_map<char, int> mp;
    for(auto ch1:s1){
        mp[ch1]++; //storing characters and frequency in s1
    }
    for(auto ch2:s2){
        if(mp.find(ch2)==mp.end()){
            return false;
        }
        else{
            mp[ch2]--;
        }
    }
    for(auto ele:mp){
        if(ele.second!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s1, s2;
    cin>>s1>>s2;
    cout<<anagram(s1, s2)<<endl;
    return 0;
}
//Time Complexity: O(N) where N = Sum of lengths of s1 and s2
//Space Complexity: O(N)