#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string, int> dir; //in ascending order
    dir["Naman"] = 1234;
    dir["Aman"] = 3456;
    dir["Ritu"] = 5678;
    for(auto element:dir){
        cout<<"Name: "<<element.first<<endl;
        cout<<"Phone number: "<<element.second<<endl;
    }
    cout<<endl;

    dir["Ritu"] = 4567; //Update the value

    //Printing values
    for(auto element:dir){
        cout<<"Name: "<<element.first<<endl;
        cout<<"Phone number: "<<element.second<<endl;
    }
    cout<<endl;

    //Traversal
    map<string, int>::iterator itr; //For reverse iterator: reverse_iterator
    for(itr=dir.begin(); itr!=dir.end(); itr++){ //For reverse traversal: rbegin() and rend()
        cout<<itr->first<<" - "<<itr->second<<endl;
    }
    return 0;
}