#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isIsomorphic(string s1, string s2){
    if(s1.length()!=s2.length()){ //If length of strings don't match
        return false;
    }
    vector<int> v1(128, -1);
    vector<int> v2(128, -1);
    for(int i=0; i<s1.length(); i++){
        if(v1[s1[i]]!=v2[s2[i]]){ //Checking if value of character at index i matches in both strings
            return false;
        }
        //Storing string position in vectors for characters at index i
        v1[s1[i]] = i;
        v2[s2[i]] = i;
    }
    return true;
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(isIsomorphic(s1, s2)){
        cout<<"Strings are isomorphic.";
    }
    else{
        cout<<"Strings are not isomorphic.";
    }
    return 0;
}

//Time Complexity: O(n) where n = length of strings
//Space Complexity: O(128+128) = O(256) = O(1) as we are using fixed size vectors of size 128