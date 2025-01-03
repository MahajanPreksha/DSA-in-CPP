#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string S = "Hello";

    //Reversing String
    reverse(S.begin(), S.end());
    cout<<S<<endl; //olleH

    //Finding Substring
    cout<<S.substr(1,3)<<endl; //oll

    // String Concatenation
    //Method 1:
    string S1 = "HELLO";
    string S2 = "WORLD";
    cout<<S1 + S2<<endl; //HELLOWORLD

    //Method 2:
    //S1 +=S2;
    //cout<<S1<<endl; //HELLOWORLD

    //Concatenation of Character Arrays:
    char s1[40] = "hello";
    char s2[30] = "world";
    strcat(s1, s2);
    cout<<s1<<endl; //helloworld

    //Insert character in string
    string t = "abcd";
    char c = 'e';
    t.push_back(c);
    cout<<t<<endl; //abcde

    //Find length of string
    cout<<t.size()<<endl; //5

    //Convert integer to string
    int num = 432;
    string str1 = to_string(num);
    str1 +="1";
    cout<<str1<<endl; //4321

    return 0;
}