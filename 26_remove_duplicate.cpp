#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    vector<int> nums(begin(arr), end(arr));
    set<int> s;
    vector<int> res;

    // Remove duplicates and store unique elements in 'res'
    for(int i = 0; i < nums.size(); i++) {
        if(s.find(nums[i]) == s.end()) {
            s.insert(nums[i]);
            res.push_back(nums[i]);
        }
    }

    int count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(count <= res.size() - 1){
            cout << res[i]<<",";
            count++;
        }
        else if(i == nums.size() - 1){
            cout<<"_";
            return 0;
        }
        else{
            cout<<"_"<<",";
        }
        
    }
    cout << endl;

    return 0;
}





