// https://takeuforward.org/data-structure/count-frequency-of-each-element-in-the-array/ 


#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    int arr[] = {10,5,10,15,10,5};
    unordered_map<int,int>mp;

    vector<int>nums(begin(arr),end(arr));

    for(auto x : nums){
        mp[x]++;
    }

    for(const auto& it : mp){
        cout<<it.first <<" occurs "<<it.second <<" in the array"<<endl;
    }

    return 0;
}