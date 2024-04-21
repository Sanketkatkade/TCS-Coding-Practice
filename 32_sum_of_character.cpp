#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(){
    string input;
    cin >> input;
    long long int sum = 0;
    for(int i = 0; i < input.size(); i++){
        for(int j = i; j < input.size(); j++){
            string temp = input.substr(i ,j - i + 1);
            sum += stoi(temp);
            cout<<temp<<" ";
        }
    }
    cout<<endl;
    cout<<sum<<endl;
    return 0;
}