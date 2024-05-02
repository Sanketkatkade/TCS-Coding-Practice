// https://www.geeksforgeeks.org/perfect-number/


#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int ans = 0;
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            ans += i;
        }
    }
    if(ans == num){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}