// https://takeuforward.org/data-structure/find-the-largest-word-in-a-string/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    string res;
    string temp;

    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            temp += str[i];
        }
        else if(str[i] == ' '){
            if(res.size() < temp.size()){
                res = temp;
                temp = "";
            }
        }
    }
    if(temp.size() > res.size()){
        res = temp;
    }
    cout<<res;
    return 0;
}