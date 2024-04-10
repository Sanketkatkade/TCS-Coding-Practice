// https://leetcode.com/problems/find-words-containing-character/ 


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>ans;
    string words[2] = {"leet","code"};
    char x = 'e';
    for(int i = 0; i < 2; i++){
        if(words[i].find(x) != string::npos){
            ans.push_back(i);
        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}