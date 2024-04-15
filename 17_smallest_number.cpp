// https://takeuforward.org/data-structure/find-the-smallest-element-in-an-array/ 


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {8,10,5,5,9};
    vector<int>num(begin(arr),end(arr));

    sort(num.begin(),num.end());

    cout<<num[0];
    return 0;
}