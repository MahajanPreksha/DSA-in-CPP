#include<iostream>
using namespace std;

//Method 1: Iterative Solution
int p1(int p, int q){
    int ans = 1;
    for(int i=0; i<q; i++){
        ans *=p;
    }
    return ans;
}

//Time Complexity: O(q)
//Space Complexity: O(1)

//Method 2: Recursive Solution
int p2(int p, int q){
    if(q==0){
        return 1;
    }
    return p * p2(p, q-1);
}

//Time Complexity: O(q)
//Space Complexity: O(q)

//Method 3: Optimized Recursive Solution
int p3(int p, int q){
    if(q==0){
        return 1;
    }
    else if(q%2==0){ //Even Power
        int res = p3(p, q/2);
        return res * res;
    }
    else{ //Odd Power
        int res = p3(p, (q-1)/2);
        return p * res * res;
    }
}

//Time Complexity: O(log(q))
//Space Complexity: O(log(q))

int main(){
    int p, q;
    cin>>p>>q;
    cout<<p1(p, q)<<endl;
    cout<<p2(p, q)<<endl;
    cout<<p3(p, q)<<endl;
    return 0;
}