#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {4,2,8,6,15,5,9,20};
    vector<int>nums(begin(arr),end(arr));
    sort(nums.begin(),nums.end());
    vector<int>res;
    for(int i = 0; i < nums.size()/2; i++){
        res.push_back(nums[i]);
    }
    for(int i = nums.size() - 1; i >= nums.size()/2; i--){
        res.push_back(nums[i]);
    }

    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}