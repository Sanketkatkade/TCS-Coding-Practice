// https://www.geeksforgeeks.org/find-all-factors-of-a-natural-number-in-sorted-order/  

// #include<iostream>
// using namespace std;

// int main(){
//     int num;
//     cin >> num;
//     for(int i = 1; i <= 100; i++){
//         if(num % i == 0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }



#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i = 1; i <= sqrt(num); i++){
        if(num % i == 0){
            cout<<i<<" ";
            if(i != (num/i)){
                cout<<num/i<<" ";
            }
        }
    }
    return 0;
}