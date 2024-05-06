// https://leetcode.com/problems/longest-continuous-increasing-subsequence/


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int n,temp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    int count = 1;
    int res = 1;
    for(int i = 1; i < v.size(); i++){
        if(v[i] > v[i - 1]){
            count++;
        }
        else{
            res = max(res,count);
            count = 1;
        }
    }
    cout<<count;
    return 0;
}