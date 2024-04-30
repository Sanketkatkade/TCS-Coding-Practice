// https://www.geeksforgeeks.org/c-program-to-check-whether-a-number-is-prime-or-not//

#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num == 1){
        cout<<"The given number is not a prime"<<endl;
        return 0;
    }
    int flag = 1;
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout<<"The given number is a prime "<<endl;
    }
    else{
        cout<<"The given number is not a prime"<<endl;
    }
    return 0;
}