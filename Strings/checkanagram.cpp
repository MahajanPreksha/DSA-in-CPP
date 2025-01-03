#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isAnagram(string s1, string s2){
    //If lengths are different for both strings, then they can't be anagrams
    if(s1.length()!=s2.length()){
        return false;
    }

    //Creating frequency array for each character
    vector<int> freq(26, 0);

    //Storing frequency of each character in the array
    for(int i=0; i<s1.length(); i++){
        freq[s1[i]-'a']++; //For s1, we are incrementing the frequency of character
        freq[s2[i]-'a']--; //For s2, we are decrementing the frequency of character
    }

    //Checking if frequency of every character is 0
    for(int i=0; i<26; i++){
        if(freq[i]!=0){ //not anagram
            return false;
        }
    }
    return true;
}

int main(){
    string s1, s2;
    cin>>s1>>s2;
    if(isAnagram(s1, s2)){
        cout<<"Strings are anagrams";
    }
    else{
        cout<<"Strings are not anagrams";
    }
    return 0;
}

//Time Complexity: O(n) where n = length of any string
//Space Complexity: O(26) = O(1) as we are using fixed size array of 26 characters