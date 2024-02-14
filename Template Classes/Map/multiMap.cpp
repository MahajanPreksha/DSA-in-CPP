#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string, int> mp;
    mp.insert(make_pair("Bali", 2345));
    mp.insert(make_pair("Animesh", 3456));
    mp.insert(make_pair("Bali", 9876));

    //Printing elements
    for(auto pair:mp){
        cout<<"Roll Number - "<<pair.first<<endl;
        cout<<"Name - "<<pair.second<<endl;
    } //Elements stored in random order
    cout<<endl;

    //Count number of occurrences
    cout<<mp.count("Bali")<<endl;
    return 0;
}