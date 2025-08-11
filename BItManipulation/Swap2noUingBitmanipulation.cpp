#include<bits/stdc++.h>
using namespace std;

//swaping of two numbers without using the third variable , using the bit manipulation (XOR)method
void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
int main(){
    int a=10;
    int b=20;
    
    swap(a,b);
    cout<<"a is "<<a << " And "<< "b is " <<b << " Now";
}