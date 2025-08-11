#include<bits/stdc++.h>
using namespace std;

//set bit check karne ka matlab hai ki number N ke ith digit kya 1 hai ya nhi jaise 
//n=13 iska binary value hoga 1 1 0 1 and the ith position is 2 to right se ith position kya 1 hai ya nhi and the answer is yes because the ith positon is set to 1 ,as the counting starts from the 0 not 1 
bool setBitCheck(int &n, int i){
    if((n >> i) & 1 ==0){
        return false;
    }
    else return true;
}
int main(){
    int n=13;
    int i=2;
    setBitCheck(n,i);
    if(setBitCheck == false){
        cout<<"No";
    }
    else cout<<"Yes";

}