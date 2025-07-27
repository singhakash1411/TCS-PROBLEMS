#include<bits/stdc++.h>
using namespace std;

void countVowelsCons(const string& s){
   int vowel =0, cons=0;
   for(char ch :s ){
    if(isalpha(ch)){
        char lower = tolower(ch);
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower== 'u'){
            vowel = vowel +1;
        }
        else{
            cons +=1;
        }
    }
   }
   cout<< "No of vowels are : "<< vowel<<endl;
   cout<<"No of consonant are : "<< cons;
}
int main(){
    string s= "Akash";
    cout<<"The vowels and consonant are :"<<endl;
    countVowelsCons(s);
    return 0;
}