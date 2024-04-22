// https://takeuforward.org/data-structure/check-if-the-given-string-is-palindrome-or-not/ 

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int start = str[0];
    int end = str[str.size() - 1];
    while(start <= end){
        if(str[start] != str[end]){
            cout<<"Not Palindrome"<<endl;
            return 0;
        }
        start++;
        end--;
    }
    cout<<"Palindrome"<<endl;
    return 0;
}