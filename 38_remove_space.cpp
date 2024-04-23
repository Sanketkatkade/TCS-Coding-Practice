// https://takeuforward.org/data-structure/remove-spaces-from-a-string/ 


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i = 0; i < str.size(); i++){
        if(isspace(str[i])){
            str.erase(i,1);
            i--;
        }
    }
    cout<<str<<endl;
    return 0;
}