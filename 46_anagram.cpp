// https://takeuforward.org/data-structure/check-if-two-strings-are-anagrams-of-each-other/
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    string str1,str2;
    cin >> str1 >> str2;
    map<char,int>mp1;
    map<char,int>mp2;

    if(str1.size() != str2.size()){
        cout<<"False";
        return 0;
    }

    for(auto x : str1){
        mp1[x]++;
    }
    for(auto x : str2){
        mp2[x]++;
    }

    for(auto it : mp1){
        char ch = it.first;
        if(mp1[ch] != mp2[ch]){
            cout<<"False"<<endl;
            return 0;
        }
    }
    cout<<"True"<<endl;
    return 0;
}
