#include<iostream>
using namespace std;

void countSort(string &s){
    int freq[26] = {0};
    //Storing frequency of each character
    for(int i=0; i<s.length(); i++){
        freq[s[i] - 'a']++;
    }

    //Create sorted string
    int j=0;
    for(int i=0; i<26; i++){
        while(freq[i]--){
            s[j++] = i + 'a';
        }
    }
}

int main(){
    string s;
    cin>>s;
    countSort(s);
    cout<<s<<endl;
    return 0;
}

//Time Complexity: O(n) where n = length of the string
//Space Complexity: O(26) = O(1) as we are using a constant space array of size 26