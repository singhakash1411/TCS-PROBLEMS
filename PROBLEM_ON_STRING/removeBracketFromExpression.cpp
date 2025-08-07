#include<bits/stdc++.h>
using namespace std;

string removeBracket(string exp){
    string result;
    for(int i  = 0; i< exp.length();i++){        
        if(exp[i] != '(' && exp[i] != ')'){
            result.push_back(exp[i]);
        }
    }
    return result;
}

int main(){
    string exp = "a+((c*b)-2)";
    string print=removeBracket(exp);
    cout<<print;
    return 0;

}
