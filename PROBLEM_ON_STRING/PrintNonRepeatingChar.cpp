#include<bits/stdc++.h>
using namespace std;
void  printNonRepeatingChar(string  &name) {
    unordered_map<char,int>mpp;
    string pr= "";
    for(char c : name){
        mpp[c]++;
    }
    for(char c: name){
        if(mpp[c]==1){
            pr.push_back(c);
        }
    }
    for(int i=0 ;i < pr.size();i++){
        cout<<pr[i]<<" ";
    }
    
}
int main(){
    string name = "google";
    printNonRepeatingChar(name);
    return 0;

}