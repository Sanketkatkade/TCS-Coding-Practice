// https://takeuforward.org/data-structure/reverse-a-string/


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;

    cin >> str;

    int start = 0;
    int end = str.size() - 1;

    while(start <= end){
        swap(str[start],str[end]);
        start++;
        end--;
    } 
    cout<<str;
    return 0;
}