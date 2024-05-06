#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

int main(){
    string input;
    getline(cin,input);
    stringstream ss(input);

    vector<int>v;
    int temp;

    while(ss >> temp){
        v.push_back(temp);
    }

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}