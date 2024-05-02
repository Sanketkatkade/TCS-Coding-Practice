// https://leetcode.com/problems/valid-perfect-square/description/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin >> num;
    int sqrtnum = sqrt(num);
    if(sqrtnum * sqrtnum == num){
        cout<<"True"<<endl;
        return 0;
    }
    cout<<"False"<<endl;
    return 0;
}