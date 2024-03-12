#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
int calc(int v1, int v2, char op){
    if(op=='^'){
        return pow(v2, v1);
    }
    if(op=='*'){
        return v1 * v2;
    }
    if(op=='/'){
        return v2 / v1;
    }
    if(op=='+'){
        return v1 + v2;
    }
    return v2 - v1;
}
int eval(string &str){
    stack<int> st;
    for(int i=str.size()-1; i>=0; i--){
        char ch = str[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int v1 = st.top();
            st.pop();
            int v2 = st.top();
            st.pop();
            st.push(calc(v1, v2, ch));
        }
    }
    return st.top();
}
int main(){
    string str = "-9+*531";
    cout<<eval(str)<<endl;
    return 0;
}
//Time Complexity: O(N)
//Space Complexity: O(N)