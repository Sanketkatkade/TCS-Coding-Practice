#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5};
    int k = 2;
    vector<int>nums(begin(array),end(array));
    vector<int>temp(nums.size());
    for(int i = 0; i < nums.size(); i++){
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}