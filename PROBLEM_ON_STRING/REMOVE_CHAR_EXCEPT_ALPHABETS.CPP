#include<bits/stdc++.h>
using namespace std;

string removeCharExceptAlpha(string s){
    string result;
    for(int i =0; i< s.size(); i++){
        int ascii = (int)s[i];
        if(ascii >=65 && ascii <=90 || ascii >= 97 && ascii <=122){
            result.push_back(s[i]);
        }

    }
    return result;
}
int main(){
    string s= "Here is my Num 123456  ";
    string print = removeCharExceptAlpha(s);
    cout<<print;
    return 0;
}