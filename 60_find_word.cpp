// https://takeuforward.org/data-structure/find-the-position-of-a-substring-within-a-string/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2;
    cin >> str1 >> str2;
    size_t found = str1.find(str2);
    if(found != string:: npos){
        cout<<found;
        return 0;
    }
    else{
        cout<<"-1";
    }
    return 0;
}