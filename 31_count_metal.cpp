#include<iostream>
#include<string>
using namespace std;

int main(){
    string stone;
    cin >> stone;
    string metal;
    cin >> metal;
    int count = 0;
    for(int i = 0; i < metal.size(); i++){
        for(int j = 0; j < stone.size(); j++){
            if(metal[i] == stone[j]){
                count++;
            }
        }
    }
    cout<<endl;
    cout<<count;
    return 0;
}