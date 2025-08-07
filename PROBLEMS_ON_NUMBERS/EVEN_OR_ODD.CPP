#include<bits/stdc++.h>
using namespace std;

void oddEvenChecker(int x){
    if(x % 2==0)cout<<"Even";
    else{
        cout<<"Odd";
    }
}
int main(){
    int x = 23;
    oddEvenChecker(x);
    return 0;

}
