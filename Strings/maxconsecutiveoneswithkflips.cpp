#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int maxConsecutiveOnes(string str, int k){
    //We need to find longest substring with max k 0's using Sliding Window Technique.
    int n = str.length();
    int s = 0, e = 0;
    int zeroCount = 0;
    int maxLength = 0;
    for(; e<n; e++){
        if(str[e]=='0'){
            zeroCount++;
        }
        while(zeroCount>k){
            if(str[s]=='0'){
                zeroCount--;
            }
            s++; //Contracting the window
        }
        //zeroCount is less than or equal to k
        maxLength = max(maxLength, e-s+1);
    }
    return maxLength;
}

int main(){
    string str;
    cin>>str;
    int k;
    cin>>k;
    int ans = maxConsecutiveOnes(str, k);
    cout<<ans;
    return 0;
}

//Time Complexity: O(n) where n = length of the binary string
//Space Complexity: O(1)