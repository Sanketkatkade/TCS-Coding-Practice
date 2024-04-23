// https://takeuforward.org/string/capitalize-first-and-last-character-of-each-word-of-a-string/


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    for(int i = 0; i < str.size(); i++){
        if(i == 0){
            str[i] = toupper(str[i]);
        }
        else if(isspace(str[i - 1])){
            str[i] = toupper(str[i]);
        }
        else if(isspace(str[i+1])){
            str[i] = toupper(str[i]);
        }
        else if(i == str.size() - 1){
            str[i] = toupper(str[i]);
        }
    }
    cout<<str<<endl;
    return 0;
}