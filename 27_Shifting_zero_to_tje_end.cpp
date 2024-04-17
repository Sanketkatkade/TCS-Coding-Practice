// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>nums;
//     int n,temp;
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cin>> temp;
//         nums.push_back(temp);
//     }
//     int m = 0;
//     for(int i = 0; i < nums.size(); i++){
//         if(nums[i] != 0){
//            nums[m] = nums[i];
//            m++; 
//         }
//     }

//     for(int i = m; i < n; i++){
//         nums[i] = 0;
//     }

//     for(int i = 0; i < n; i++){
//         cout<<nums[i]<<" ";
//     }
    

//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums;
    int n,temp;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>> temp;
        nums.push_back(temp);
    }
    int m = n - 1;
    for(int i = nums.size() - 1; i >= 0; i--){
        if(nums[i] != 0){
           nums[m] = nums[i];
           m--; 
        }
    }

    for(int i = m; i >= 0; i--){
        nums[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }
    

    return 0;
}
