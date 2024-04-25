// https://takeuforward.org/data-structure/remove-all-duplicates-from-a-string/

#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){
    string str;
    cin >> str;
    string res;
    unordered_set<char>seen;

    for(char c : str){
        if(seen.find(c) == seen.end()){
            res += c;
            seen.insert(c);
        }
    }

    cout<<res;
    return 0;
}