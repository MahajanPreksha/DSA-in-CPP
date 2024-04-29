#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<int>> graph;
int v; //number of vertices
void add_edge(int src, int dest, bool bi_direc = true){
    graph[src].push_back(dest);
    if(bi_direc){
        graph[dest].push_back(src);
    }
}
void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<",";
        }
        cout<<endl;
    }
}
int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        // add_edge(s, d); //for undirected graph
        add_edge(s, d, false); //for directed graph
    }
    display();
    return 0;
}