#include<iostream>
using namespace std;

//Method 1: Iterative Solution
string f1(string s){
    string ans = "";
    for(int i=0; i<s.length(); i++){
        if(s[i]!='a'){
            ans +=s[i];
        }
    }
    return ans;
}

//Time Complexity: O(N)
//Space Complexity: O(N)

//Method 2: Recursive Solution
string f2(string s, int i){ //This function removes all the occurrences of 'a' from s, starting from the index i.
    if(i==s.length()){
        return "";
    }
    string curr = "";
    curr +=s[i];
    return (s[i]=='a')? f2(s, i+1):curr + f2(s, i+1);
}

//Time Complexity: O(N)
//Space Complexity: O(N)

int main(){
    string s;
    cin>>s;
    cout<<f1(s)<<endl;
    cout<<f2(s, 0)<<endl;
    return 0;
}

/* Base Case: If there is no character left in the string, return an empty string.
Assumption: Assume that the function f2(s, i) removes all the occurrences of 'a' from s, starting from the index i+1.
Self-work: If s[i] is 'a', then return f2(s, i+1). Otherwise, return s[i] + f2(s, i+1). */