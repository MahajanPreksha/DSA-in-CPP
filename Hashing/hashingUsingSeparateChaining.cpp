#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Hashing{
    private:
    vector<list<int>> hashTable;
    int buckets;
    public:
    Hashing(int size){
        buckets = size;
        hashTable.resize(size);
    }
    int hashValue(int key){
        return key % buckets; //division method for hash function
    }
    void addKey(int key){
        int idx = hashValue(key);
        hashTable[idx].push_back(key);
    }
    list<int>::iterator searchKey(int key){
        int idx = hashValue(key);
        return find(hashTable[idx].begin(), hashTable[idx].end(), key);
    }
    void deleteKey(int key){
        int idx = hashValue(key);
        if(searchKey(key)!=hashTable[idx].end()){ //key is present
            hashTable[idx].erase(searchKey(key));
            cout<<key<<" is deleted."<<endl;
        }
        else{
            cout<<"Key is not present inside the hash table."<<endl;
        }
    }
};
int main(){
    Hashing h(10);
    h.addKey(5);
    h.addKey(9);
    h.addKey(3);
    h.deleteKey(3);
    return 0;
}
//Time Complexity: O(1)