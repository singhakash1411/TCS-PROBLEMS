#include<bits/stdc++.h>
using namespace std ;

void removeVowels(const string& s){
    string result = "";
    for(char ch : s){
        char lower = tolower(ch);
        if(!(lower == 'a' || lower=='e' || lower== 'i' || lower=='o' || lower=='u')){
            result = result + ch;
        }
    }
    cout<<"The string without the vowels is : "<<result<<endl;
}
int main(){
    string s= "Hey , Good Morning!";
    removeVowels(s);
    return 0;
}