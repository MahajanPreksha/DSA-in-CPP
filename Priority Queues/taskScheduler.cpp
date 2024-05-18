#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;
int leastUnits(vector<char> tasks, int cooldown){
    //1. Count frequency of tasks
    unordered_map<char, int> taskFreq;
    for(auto t:tasks){
        taskFreq[t]++;
    }
    //2. Insert frequency into Max Heap
    priority_queue<int> pq;
    for(auto e:taskFreq){
        pq.push(e.second);
    }
    //3. Finding time until pq is empty
    int totalTime = 0;
    while(!pq.empty()){
        vector<int> temp;
        //looping one time frame = n + 1 units of time
        for(int i=0; i<=cooldown; i++){
            if(!pq.empty()){
                int freq = pq.top();
                pq.pop();
                if(freq>1){
                    temp.push_back(freq-1); //adding remaining tasks in temp vector
                }
            }
            totalTime++;
            if(pq.empty() && temp.empty()){
                return totalTime; //All tasks have been executed
            }
        }
        for(auto t:temp){
            pq.push(t); //adding back remaining tasks from temp vector to pq
        }
    }
    return totalTime;
}
int main(){
    int n;
    cin>>n;
    vector<char> tasks(n);
    for(int i=0; i<n; i++){
        cin>>tasks[i];
    }
    int cooldown;
    cin>>cooldown;
    cout<<leastUnits(tasks, cooldown)<<endl;
    return 0;
}