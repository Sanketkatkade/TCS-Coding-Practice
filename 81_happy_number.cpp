// https://leetcode.com/problems/happy-number/description/


#include<iostream>
using namespace std;

int calcSum(int num){
    int sum = 0;
    while(num){
        sum += (num % 10) * (num % 10);
        num /= 10;
    }
    return sum;
}

int main(){
    int num;
    cin >> num;
    int count = 50;
    while(count--){
        num = calcSum(num);
        if(num == 1){
            cout<<"True";
            return 0;
        }
    }
    cout<<"False";
    return 0;
}