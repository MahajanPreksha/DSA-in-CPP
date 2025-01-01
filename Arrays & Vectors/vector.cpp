#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Declaring a vector
    vector<int> v;

    //Checking size and capacity of vector
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    //Inserting elements in vector
    v.push_back(1);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    //Resizing vector
    v.resize(5);
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    //Deleting elements from vector
    v.pop_back();
    v.pop_back();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

    return 0;
}

/*Output:
Size: 0
Capacity: 0
Size: 1
Capacity: 1
Size: 2
Capacity: 2
Size: 3
Capacity: 4
Size: 5
Capacity: 6 
Size: 3
Capacity: 6 */