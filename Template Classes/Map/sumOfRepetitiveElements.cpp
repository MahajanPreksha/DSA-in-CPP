#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[v[i]]++; //Storing frequency of every element in input array
    }
    int sum = 0;
    //Finding sum of repetitive elements
    //pair = element, frequency
    for(auto pair:mp){
        if(pair.second>1){ //Element is repetitive
            sum +=pair.first;
        }
    }
    cout<<"Answer is: "<<sum<<endl;
    return 0;
}
//Time Complexity: O(n) where n = number of elements
//Space Complexity: O(m) where m = number of unique elements