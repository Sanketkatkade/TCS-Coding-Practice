// https://takeuforward.org/data-structure/remove-brackets-from-an-algebraic-expression/


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(' || str[i] == ')'){
            str.erase(i,1);
            i--;
        }
    }
    cout<<str;
    return 0;
}