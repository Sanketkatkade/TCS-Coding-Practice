// https://takeuforward.org/data-structure/find-the-largest-element-in-an-array/ 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int arr[] = {2,5,1,3,0};
//     vector<int>num(begin(arr),end(arr));
//     sort(num.begin(),num.end());
//     cout<<num[num.size() - 1];
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {2,5,7,3,0};
    vector<int>num(begin(arr),end(arr));
    int maxi = num[0];
    for(int i = 0; i < num.size(); i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout<<maxi;
    return 0;
}