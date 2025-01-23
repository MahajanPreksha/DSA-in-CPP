#include<iostream>
#include<vector>
using namespace std;

//Iterative Solution
int binarySearch(vector<int> &v, int target){
    //Define search space
    int low = 0; //Start of the search space
    int high = v.size() - 1; //End of the search space
    while(low<=high){
        int mid = (low + high)/2; //Calculate the midpoint of the search space
        if(v[mid]==target){
            return mid;
        }
        if(v[mid]<target){
            low = mid + 1; //Discard the left of mid
        }
        else{
            high = mid - 1; //Discard the right of mid
        }
    }
    return -1;
}

//Time Complexity: O(log N)
//Space Complexity: O(1)

//Recursive Solution
int binarySearchRecursive(vector<int> &v, int target, int low, int high){
    int mid = (low + high)/2;
    if(low>high){
        return -1;
    }
    if(v[mid]==target){
        return mid;
    }
    if(v[mid]<target){
        return binarySearchRecursive(v, target, mid+1, high);
    }
    else{
        return binarySearchRecursive(v, target, low, mid-1);
    }
}

//Time Complexity: O(log N)
//Space Complexity: O(log N)

//Modified Recursive Solution
int binarySearchModified(vector<int> &v, int target, int low, int high){
    int mid = low + (high - low)/2; //Modified midpoint to avoid overflow
    if(low>high){
        return -1;
    }
    if(v[mid]==target){
        return mid;
    }
    if(v[mid]<target){
        return binarySearchModified(v, target, mid+1, high);
    }
    else{
        return binarySearchModified(v, target, low, mid-1);
    }
}

//Time Complexity: O(log N)
//Space Complexity: O(log N)

int main(){
    vector<int> v = {2, 4, 5, 7, 15, 24, 45, 50};
    int target = 15;

    cout<<binarySearch(v, target)<<endl;

    int low = 0, high = v.size() - 1;
    cout<<binarySearchRecursive(v, target, low, high)<<endl;

    cout<<binarySearchModified(v, target, low, high)<<endl;

    return 0;
}