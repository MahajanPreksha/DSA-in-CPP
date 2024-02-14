#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int, string> mp;
    mp.insert(make_pair(3, "Ria")); //Stores roll number and name
    mp[1] = "Bali";
    mp[2] = "Animesh";

    //Printing elements
    for(auto pair:mp){
        cout<<"Roll Number - "<<pair.first<<endl;
        cout<<"Name - "<<pair.second<<endl;
    } //Elements stored in random order
    return 0;
}