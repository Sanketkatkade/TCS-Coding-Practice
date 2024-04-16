// // https://takeuforward.org/data-structure/average-of-all-the-elements-in-the-array/ 

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[6] = {1,2,1,1,5,1};
//     float ans = 0;
//     for(int i = 0; i < 6; i++){
//         ans += arr[i];
//     }
//     ans = ans / 6;
//     cout<<ans<<endl;
//     return 0;
// }

#include<iostream>
#include<iomanip> // for setprecision
using namespace std;

int main(){
    int arr[6] = {1,2,1,1,5,1};
    float ans = 0;
    for(int i = 0; i < 6; i++){
        ans += arr[i];
    }
    ans = ans / 6;
    cout << fixed << setprecision(1) << ans << endl; 
    return 0;
}
