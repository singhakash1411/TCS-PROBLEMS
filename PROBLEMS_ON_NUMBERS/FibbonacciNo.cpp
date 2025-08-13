#include<bits/stdc++.h>
using namespace std;

void fibbonacci(int N){
    int first= 0; 
    int second=1;
    int next;
    if(N<=1){
        cout<< first <<" ";
        return;
    }
    else if(N<=2){
         cout<<second <<" ";
         return;
    }
    else{
        cout<<first<<" "<< second<< " ";
        for(int i= 2; i <N; i++){
        next = first + second ;
        cout<<next<<" ";
        first = second ;
        second = next;
        }
    }
    
    

}
int main(){
    int N=5;
    fibbonacci(5);
    return 0;

}