// https://takeuforward.org/data-structure/remove-characters-from-first-string-present-in-the-second-string/

#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){
    string str1,str2;
    cin >> str1 >> str2;
    unordered_set<char>seen;
    for(char c : str2){
        seen.insert(c);
    }

    for(char c : str1){
        if(seen.find(c) == seen.end()){
            cout<<c;
        }
    }

    return 0;
}