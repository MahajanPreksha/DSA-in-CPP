#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set1;

    //Inserting elements
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    cout<<set1.size()<<endl; //checking size of set
    set1.insert(3);
    cout<<set1.size()<<endl; //size remains same as duplicate value is added and sets contain only unique values
    set1.insert(4);
    set1.insert(5);

    //Traversal of a Set
    set<int>::iterator itr;
    for(itr=set1.begin(); itr!=set1.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    for(auto it:set1){
        cout<<it<<" ";
    }
    cout<<endl;

    //Deletion of elements
    set1.erase(4);

    set<int> set2 = {1, 2, 3, 4, 5};
    auto it = set2.begin();
    advance(it, 3);
    set2.erase(it);
    for(auto it:set2){
        cout<<it<<" ";
    }
    cout<<endl;

    set<int> set3 = {1, 2, 3, 4, 5};
    auto start_itr = set3.begin();
    start_itr++;
    auto end_itr = set3.begin();
    advance(end_itr, 3);
    set3.erase(start_itr, end_itr);
    for(auto it:set3){
        cout<<it<<" ";
    }
    cout<<endl;
    
    //Search operation
    set<int> set4 = {1, 2, 3, 4, 5};
    if(set4.find(4)!=set4.end()){
        cout<<"Value is present"<<endl;
    }
    else{
        cout<<"Value is not present"<<endl;
    }
    return 0;
}