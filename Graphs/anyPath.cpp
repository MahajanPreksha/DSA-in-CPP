#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visited;
int v; //number of vertices
void add_edge(int src, int dest, bool bi_direc = true){
    graph[src].push_back(dest);
    if(bi_direc){
        graph[dest].push_back(src);
    }
}
bool dfs(int curr, int end){
    if(curr==end){
        return true;
    }
    visited.insert(curr); //mark visited
    for(auto neighbour:graph[curr]){
        if(!visited.count(neighbour)){
            bool res = dfs(neighbour, end);
            if(res){
                return true;
            }
        }
    }
    return false;
}
bool anyPath(int src, int dest){
    return dfs(src, dest);
}
int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s, d;
        cin>>s>>d;
        add_edge(s, d, false);
    }
    int x, v;
    cin>>x>>v;
    cout<<anyPath(x, v)<<endl;
    return 0;
}
//Time Complexity: O(V + E)
//Space Complexity: O(V) [comes due to recursion]