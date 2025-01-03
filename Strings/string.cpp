#include<iostream>
#include<string>
using namespace std;

int main(){
    //Creating a string
    string str = "preksha";
    string str1("mahajan");
    cout<<str<<" "<<str1<<endl;

    //Inputting a string
    string s;
    cin>>s; //doesn't take input after a space/newline/tab
    cout<<s<<endl;

    string s1;
    cin.ignore();
    getline(cin, s1);
    cout<<s1<<endl;

    //Check ASCII Values
    char ch = 'a';
    cout<<int(ch)<<endl;
    return 0;
}