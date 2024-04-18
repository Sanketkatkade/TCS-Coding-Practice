
// Given an array of integers, find the nearest smallest number for every element such that the smaller element is on the left side.
// Input: {1,6,4,10,2,5}
// Output: {-1,1,1,4,1,2}

// Input: {3,2,1}
// Output: {-1,-1,-1}

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums;
    vector<int>res;
    int temp,n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>temp;
        nums.push_back(temp);
    }
    for(int i = n - 1; i >= 0; i--){
        bool flag = true;
        for(int j = i; j >= 0; j--){
            if(nums[i] > nums[j]){
                res.push_back(nums[j]);
                flag = false;
                break;
            }
        }
        if(flag){
            res.push_back(-1);
        }
    }

    for(int i = n - 1; i >= 0; i--){
        cout<<res[i]<<" ";
    }
    return 0;
}