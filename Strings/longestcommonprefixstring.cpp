#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Method 1
string LCP(vector<string>& v){
    if(v.size()==0){
        return 0;
    }
    //Sorting the array of strings
    sort(v.begin(), v.end());

    string s1 = v[0]; //First string
    int i = 0;
    string s2 = v[v.size()-1]; //Last string
    int j = 0;
    
    string ans = "";
    while(i<s1.length() && j<s2.length()){
        if(s1[i]==s2[j]){
            ans +=s1[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }
    return ans;
}

//Time Complexity: O(n log n * m) + O(min(v[0].size(), v[n-1].size())) = O(n log n * m)
//Space Complexity: O(1)

//Method 2
string LCP2(vector<string>& v){
    //Keeping first string as constant and comparing it with all other strings
    string s1 = v[0];
    int ans_length = s1.length();
    for(int i=0; i<v.size(); i++){
        int j = 0;
        while(j<s1.length() && j<v[i].length() && s1[j]==v[i][j]){ //Finding the length common prefix string
            j++;
        }
        ans_length = min(ans_length, j); //Updating the length of answer string
    }
    string ans = s1.substr(0, ans_length);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    string res = LCP(v);
    cout<<"Longest Common Prefix: "<<res<<endl;

    string ans = LCP2(v);
    cout<<"Longest Common Prefix: "<<ans<<endl;
}

//Time Complexity: O(n * m) where n = number of strings and m = general length of strings
//Space Complexity: O(1)