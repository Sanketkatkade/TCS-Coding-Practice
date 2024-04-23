// https://takeuforward.org/data-structure/sum-of-the-numbers-in-a-string/


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int res = 0;
    int digit = 0;
    for(int i = 0; i < str.size(); i++){
        if(isdigit(str[i])){
            int num = str[i] - '0';
            digit = digit * 10 + num;
        }
        else if(isalpha(str[i])){
            res += digit;
            digit = 0;
        }

    }

    res += digit;
    cout<<res;
    return 0;
}