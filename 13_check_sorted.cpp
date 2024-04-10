#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[6] = { 20, 23, 23, 45, 78, 78 };
    // for(int i = 0; i < 5; i++){
    //     if(arr[i] > arr[i+1]){
    //         cout<<"NO"<<endl;
    //         return 0;
    //     }
    // }
    // cout<<"YES"<<endl;

    // if(is_sorted(begin(arr),end(arr))){
    //     cout<<"Yes"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }

    vector<int>res(begin(arr),end(arr));
    sort(arr,arr+6);
    if(res == vector<int>(begin(arr),end(arr))){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}