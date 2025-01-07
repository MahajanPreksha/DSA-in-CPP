#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int>> graph;
unordered_set<int> visted;
int v; //number of vertices
vector<vector<int>> result;

void add_edge(int src, int dest, bool bi_direc = true){
    graph[src].push_back(dest);
    if(bi_direc){
        graph[dest].push_back(src);
    }
}

void dfs(int curr, int end, vector<int>& path){
    if(curr==end){
        path.push_back(curr);
        result.push_back(path);
        path.pop_back();
        return;
    }
    visted.insert(curr); //mark visited
    path.push_back(curr);
    for(auto neighbour:graph[curr]){
        if(!visted.count(neighbour)){
            dfs(neighbour, end, path);
        }
    }
    path.pop_back();
    visted.erase(curr);
    return;
}

void allPath(int src, int dest){
    vector<int> v;
    dfs(src, dest, v);
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
    int x, v;
    cin>>x>>v;
    allPath(x, v);
    for(auto path:result){
        for(auto ele:path){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//Time Complexity: O(V + E)
//Space Complexity: O(V) [comes due to recursion]