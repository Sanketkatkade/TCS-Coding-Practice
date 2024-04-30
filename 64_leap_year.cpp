// https://www.geeksforgeeks.org/program-check-given-year-leap-year/  

#include<iostream>
using namespace std;

int main(){
    int year;
    cin >> year;

    if((year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}