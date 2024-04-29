#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;
vector<unordered_map<int, int>> graph;
int v; //number of vertices
void add_edge(int src, int dest, int wt, bool bi_direc = true){
    graph[src][dest] = wt;
    if(bi_direc){
        graph[dest][src] = wt;
    }
}
void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout << '(' << ele.first << " " << ele.second << "),";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
    graph.resize(v, unordered_map<int, int> ());
    int e;
    cin>>e;
    for(int i=0; i<e; i++){
        int s, d, wt;
        cin>>s>>d>>wt;
        add_edge(s, d, wt);
    }
    display();
    return 0;
}