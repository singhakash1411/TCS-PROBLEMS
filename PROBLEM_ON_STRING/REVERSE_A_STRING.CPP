#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){
    string head = "";
    for(int i = 0; i < s.size(); i++){
        head = s[i] + head; // yaha par sirf ek ek char ko lekar head me daal kar bas add karte rho reverse ho jayega 
    }
    return head;
}

int main(){
    string s = "Raj Mata";
    cout << "The reverse of the string we got is: ";
    cout << reverseString(s);
    cout << endl;
    return 0;
}
