// https://leetcode.com/problems/valid-perfect-square/description/ 


#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num = 16;
    int sqrtnum = sqrt(num);
    if(sqrtnum * sqrtnum == num){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}