// Given array of N integers , task is to replace elements with its rank in the array. 

// Example 1 : 
// Input: 20 15 26 2 98 6 
// Output: 4 3 5 1 6 2 
// Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so... 

// Example 2 : 
// Input: 1 5 8 15 8 25 9 
// Output: 1 2 3 5 3 6 4 
// Explanation: When sorted,the array is 1,5,8,8,9,15,25. So the rank of 1 is 1,rank of 5 is 2,rank of 8 is 3 and so...


#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    unordered_map<int, int> rank;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> nums_sorted(nums);
    sort(nums_sorted.begin(), nums_sorted.end());

    // Assign ranks to elements in sorted order
    int current_rank = 1;
    for (int i = 0; i < n; i++) {
        if (rank.find(nums_sorted[i]) == rank.end()) {
            rank[nums_sorted[i]] = current_rank;
            current_rank++;
        }
    }

    // Output ranks
    for (int i = 0; i < n; i++) {
        cout << rank[nums[i]] << " ";
    }

    return 0;
}





// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_map>
// using namespace std;

// int main(){
//     vector<int>nums;
//     int temp,n;
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         cin >> temp;
//         nums.push_back(temp);
//     }
//     vector<int>nums2(begin(nums),end(nums));
//     sort(nums2.begin(),nums2.end());

//     unordered_map<int,int>mp;
//     for(int i = 0; i < nums2.size(); i++){
//         mp[nums2[i]] = i + 1;
//     }

//     // for(auto const& it : nums2){
//     //     cout<<it.first<<" "<<it.second<<endl;
//     // }

//     for(int i = 0; i < nums.size(); i++){
//         cout<<mp[nums[i]]<<" ";
//     }


    
//     return 0;
// }