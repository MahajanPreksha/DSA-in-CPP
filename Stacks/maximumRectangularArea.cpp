#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int histogram(vector<int> &arr){
    int n = arr.size();
    stack<int> st; //indexes
    int ans = -1;
    st.push(0);
    for(int i=1; i<n; i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            int el = arr[st.top()]; //current bar to be removed and whose ans will be calculated
            int nsi = i;
            int psi = (st.empty()? -1:st.top());
            ans = max(ans, el * (nsi - psi - 1));
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){ //not mandatory while loop
        int el = arr[st.top()];
        st.pop();
        int nsi = n;
        int psi = (st.empty()? -1:st.top());
        ans = max(ans, el * (nsi - psi - 1));
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans = histogram(v);
    cout<<ans<<endl;
    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(n)