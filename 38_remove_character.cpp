// https://takeuforward.org/data-structure/remove-characters-from-a-string-except-alphabets/ 


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string res;

    for(int i = 0; i < str.size(); i++){
        if(isalpha(str[i])){
            res += str[i];
        }
    }

    cout<<res;
    return 0;
}