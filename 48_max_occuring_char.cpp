// https://takeuforward.org/data-structure/maximum-occurring-character-in-a-string/

#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    string str;
    cin >> str;
    map<char,int>mp;
    for(auto x : str){
        mp[x]++;
    }

    char res;
    int max = 0;
    for(const auto& it : mp){
        if(it.second > max){
            res = it.first;
            max = it.second;
        }
    }
    cout<<res;
    return 0;
}