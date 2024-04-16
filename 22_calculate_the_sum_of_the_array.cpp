// https://takeuforward.org/arrays/calculate-sum-of-the-elements-of-the-array/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1,2,1,1,5,1};
    vector<int>num(begin(arr),end(arr));
    int sum = 0;
    for(int i = 0; i < num.size(); i++){
        sum += num[i];
    }
    cout<<sum<<endl;
    return 0;
}