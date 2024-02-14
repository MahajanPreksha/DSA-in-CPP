#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_multimap<string, int> mp;
    mp.insert(make_pair("Apple", 6)); //Stores fruit name and fruit count
    mp.insert(make_pair("Banana", 9));
    mp.insert(make_pair("Apple", 3));

    //Printing elements
    for(auto pair:mp){
        cout<<"Fruit - "<<pair.first<<endl;
        cout<<"Count - "<<pair.second<<endl;
    } //Elements stored in random order
    return 0;
}