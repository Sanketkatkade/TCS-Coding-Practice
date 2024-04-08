// https://www.geeksforgeeks.org/to-find-smallest-and-second-smallest-element-in-an-array/

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[6] = {1, 13, 1, 10, 9, 1};
    sort(arr,arr+6);
    cout<<arr[0]<<" ";

    for(int i = 1; i < 6; i++){
        if(arr[i] != arr[i-1]){
            cout<<arr[i];
            return 0;
        }
    }
    return 0;
}