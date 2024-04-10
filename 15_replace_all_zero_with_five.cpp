// https://www.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1

#include<iostream>
#include<string>
using namespace std;

int main(){
    int n = 1003;
    string str = to_string(n);
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '0'){
            str[i] = '5';
        }
    }
    int res = stoi(str);
    cout<<res;
    return 0;
}