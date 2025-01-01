#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    //For Loop
    for(int i=0; i<v.size(); i++){
        int ele;
        cin>>ele;
        v.push_back(ele); //cin>>v[i]; --> This will also work but size of vector also needs to be taken as input
    }
    cout<<endl;

    //Inserting elements in vector
    v.insert(v.begin()+2, 6);

    //For each Loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    //Deleting elements from vector
    v.erase(v.end()-2);

    //While loop
    int i = 0;
    while(i<v.size()){
        cout<<v[i++]<<" ";
    }
    
    return 0;
}