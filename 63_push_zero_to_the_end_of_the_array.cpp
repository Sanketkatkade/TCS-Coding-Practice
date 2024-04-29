// https://prepinsta.com/tcs-nqt/placement-papers/coding-questions/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    vector<int>res;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] != 0){
            res.push_back(arr[i]);
        }
    }

    for(int i = res.size(); i < n; i++){
        res.push_back(0);
    }
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}