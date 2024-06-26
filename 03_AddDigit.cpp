// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

#include<iostream>
using namespace std;

int main(){
    int n = 89;
    while(n >= 10){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    cout<<n<<endl;
    return 0;
}