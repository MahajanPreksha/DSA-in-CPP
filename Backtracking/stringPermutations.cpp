#include<iostream>
#include<algorithm>
using namespace std;
void makePermutations(string &s, int i){ //This function generates all possible permutations of string s from index i to (n-1).
    //Base Case
    if(i==s.size()){
        cout<<s<<endl;
        return;
    }
    for(int j=i; j<s.size(); j++){
        swap(s[i], s[j]);
        makePermutations(s, i+1);
        swap(s[i], s[j]);
    }
}
int main(){
    string s = "PQR";
    makePermutations(s, 0);
    return 0;
}
//Rearrangement problems form the base of Backtracking.
//Time Complexity: O(n!)
//Space Complexity: O(n)