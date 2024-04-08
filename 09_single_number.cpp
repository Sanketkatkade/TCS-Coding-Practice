/* https://leetcode.com/problems/single-number/  */

#include<iostream>
using namespace std;

int main(){
    int arr[7] = {2,1,2,3,1,7,7};
    int res = 0;
    for(int i = 0; i < 7; i++){
        res ^= arr[i];
    }
    cout<<res;
    return 0;
}