// https://takeuforward.org/data-structure/find-median-of-the-given-array/ 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {2,5,1,7};
    vector<int>nums(begin(arr),end(arr));
    int n = nums.size();.
    sort(nums.begin(),nums.end());
    float mean = 0;
    if(nums.size() % 2 == 0){
        mean = (nums[n/2 - 1] + nums[n/2] )/ 2.0;
    }
    else{
        mean = nums[n/2];
    }
    cout<<mean<<endl;
    return 0;
}