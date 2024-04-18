// Given an array of integers, find an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. If no such index exists, return -1.

// Input: [-7, 1, 5, 2, -4, 3, 0]
// Output: 3
// Explaination: Index 3 is an equilibrium index because the sum of elements on the left, -7+1+5=-1, is equal to the sum of elements on the right, -4+3+0=-1.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums;
    int n,temp;
    cin>>n;
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
        sum += temp;
    }
    int leftsum = 0;
    int rightsum = 0;
    for(int i = 0; i < n; i++){
        leftsum += nums[i];
        rightsum = sum - leftsum;
        if(leftsum - nums[i] == rightsum){
            cout<<i;
            return 0;
        } 
    }

    return 0;
}