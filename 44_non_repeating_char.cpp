// https://takeuforward.org/data-structure/find-non-repeating-characters-of-a-string/


#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string str;
    cin >> str;
    unordered_map<char,int>mp;
    for(auto x : str){
        mp[x]++;
    }
    // for(const auto& it : mp){
    //     if(it.second == 1){
    //         cout<<it.first << " ";
    //     }
    // }

    for(int i = 0; i < str.size(); i++){
        if(mp[str[i]] == 1){
            cout<<str[i]<<",";
        }
    }
    
    return 0;
}

