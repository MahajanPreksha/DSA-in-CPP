#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Activity{
    int start;
    int end;
};
bool cmp(Activity a1, Activity a2){
    return a1.end < a2.end;
}
int selection(vector<Activity>& arr){
    sort(arr.begin(), arr.end(), cmp);
    int count = 1;
    Activity last = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i].start>last.end){
            count++;
            last = arr[i];
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<Activity> arr;
    while(n--){
        int s, e;
        cin>>s>>e;
        Activity a;
        a.start = s;
        a.end = e;
        arr.push_back(a);
    }
    cout<<selection(arr);
    return 0;
}
//Time Complexity: O(N log N)
//Space Complexity: O(1)