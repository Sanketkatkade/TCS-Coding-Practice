// https://takeuforward.org/data-structure/reverse-a-given-array/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {5,4,3,2,1};
    vector<int>num(begin(arr),end(arr));
    reverse(num.begin(),num.end());

    for(int i = 0; i < num.size(); i++){
        cout<<num[i]<<" ";
    }
    cout << endl;
    return 0;
}