#include<bits/stdc++.h>
using namespace std;

int addNum(const string& input){
    int sum=0;
    for(char  ch : input){
        if(isdigit(ch)){
            sum += ch - '0';
        }
    }
    return sum;
}
int main(){
    string input = "1xyz24";
    int result = addNum(input);
    cout<<result;
    return 0;

}
