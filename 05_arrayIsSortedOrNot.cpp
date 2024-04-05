// checking the array is sorted or not
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {4,6,7,1,9};
    for(int i = 0; i < 5 - 1; i++){
        if(arr[i] > arr[i + 1]){
            cout<<"Array is not sorted"<<endl;
            return 0;
        }
    }
    cout<<"Array is sorted"<<endl;
    return 0;
}