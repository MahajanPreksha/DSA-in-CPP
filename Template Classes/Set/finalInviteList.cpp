#include<iostream>
#include<set>
using namespace std;
int main(){
    set<string> inviteList;
    int n;
    cin>>n;
    while(n--){
        string name;
        cin>>name;
        inviteList.insert(name);
    }
    cout<<"Printing invite list: "<<endl;
    for(auto name:inviteList){
        cout<<name<<endl;
    }
    return 0;
}