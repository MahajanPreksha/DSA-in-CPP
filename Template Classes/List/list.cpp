#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1 = {1, 2, 3, 4};
    // list<int>::iterator itr;
    auto itr = l1.begin();
    //l1.end() - iterator pointing to the memory location after 4
    cout<<*itr<<endl;
    auto rev_itr = l1.rbegin();
    cout<<*rev_itr<<endl;
    //l1.rend() = iterator pointing to the memory location after 1
    advance(itr, 2);
    cout<<*itr<<endl;

    //Traversal in a list
    for(auto num:l1){ //using range-based loop
        cout<<num<<" ";
    }
    cout<<endl;
    for(auto itr=l1.begin(); itr!=l1.end(); itr++){ //using iterators
        cout<<*itr<<" ";
    }
    cout<<endl;

    //Reverse Traversal in a list
    for(auto itr=l1.rbegin(); itr!=l1.rend(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    //Inserting elements in a list
    auto it = l1.begin();
    advance(it, 2);
    l1.insert(it, 5);
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;

    l1.insert(it, 3, 5);
    for(auto num:l1){
        cout<<num<<" ";
    }
    cout<<endl;

    list<int> l2 = {1, 2, 3, 4};
    auto i = l2.begin();
    auto l = l2.begin();
    auto r = l2.begin();
    advance(r, 2);
    l2.insert(i, l, r);
    for(auto num:l2){
        cout<<num<<" ";
    }
    cout<<endl;

    list<int> l3 = {1, 2, 1, 2, 3, 4};
    auto s_itr = l3.begin();
    advance(s_itr, 2); //s_itr is pointing to 3rd element
    auto end_itr = l3.begin();
    advance(end_itr, 4); //end_itr is pointing to 5th element
    l3.erase(s_itr, end_itr);
    for(auto num:l3){
        cout<<num<<" ";
    }
    return 0;
}