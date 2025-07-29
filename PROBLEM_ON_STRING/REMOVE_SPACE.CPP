#include<bits/stdc++.h>
using namespace std;

void removeSpace(const string& s){
    vector<int>spacefree;
    for(char ch : s){
        if(ch != ' '){
            cout<<ch;
        }
    }
   
}
int main(){
    string s ="My name is Akash";
    removeSpace(s);
    return 0;
}