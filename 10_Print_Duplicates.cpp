/* https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/ */

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[7]={1, 2, 3, 6, 3, 6, 1};
    sort(arr,arr+7);
    for(int i = 0; i < 6; i++){
        if(arr[i] == arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}