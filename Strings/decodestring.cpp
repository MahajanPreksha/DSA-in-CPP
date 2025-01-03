#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string decode(string s){
    string result = "";

    //Traversing the encoded string
    for(int i=0; i<s.length(); i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            //Extract str from result
            string str = "";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }

            //Reversing str
            reverse(str.begin(), str.end());

            //Remove last character from result which is [
            if(!result.empty() && result.back()=='['){
                result.pop_back();
            }
            
            //Extracting number from result
            string num = "";
            while(!result.empty() && isdigit(result.back())){
                num.push_back(result.back());
                result.pop_back();
            }

            //Reversing num
            reverse(num.begin(), num.end());

            //Convert string to integer
            int int_num = stoi(num);

            //Insert str int_num times in result
            while(int_num>0){
                result +=str;
                int_num--;
            }
        }
    }
    return result;
}

int main(){
    string s;
    cin>>s;
    string ans = decode(s);
    cout<<ans;
    return 0;    
}

//Time Complexity: O(n) where n = length of decoded string
//Space Complexity: O(n) where n = length of decoded string