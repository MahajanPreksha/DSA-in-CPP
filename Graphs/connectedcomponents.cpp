#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
int v; //number of vertices

void add_edge(int src, int dest, bool bi_direc = true){
    graph[src].push_back(dest);
    if(bi_direc){
        graph[dest].push_back(src);
    }
}

void DFS(int node, unordered_set<int>& visited){
    visited.insert(node);
    for(auto neighbour:graph[node]){
        if(!visited.count(neighbour)){
            DFS(neighbour, visited);
        }
    }
}

int connectedComponents(){
    int res = 0;
    unordered_set<int> visited;
    for(int i=0; i<v; i++){

        //Go to every vertex
        //If from a vertex we can initialise a DFS, we get one more connected component
        if(visited.count(i)==0){
            res++;
            DFS(i, visited);
        }
    }
    return res;
}

int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d);
    }
    cout<<connectedComponents();
    return 0;
}