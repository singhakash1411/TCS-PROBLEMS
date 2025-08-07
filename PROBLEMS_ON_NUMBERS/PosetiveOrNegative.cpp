#include<bits/stdc++.h>
using namespace std;
void PosetiveNegativeChecker(int x){
    if(x >=0)cout<<"Posetive";
    else cout<<"Negative";
}

int main(){
    int x= -10;
    PosetiveNegativeChecker(x);
    return 0;

}