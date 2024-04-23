// https://takeuforward.org/data-structure/calculate-frequency-of-characters-in-a-string/


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
    for(const auto& it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}