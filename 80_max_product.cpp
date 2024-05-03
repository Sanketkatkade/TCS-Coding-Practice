// https://leetcode.com/problems/maximum-product-of-three-numbers/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums;
    int m, temp;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    int n = nums.size();

    sort(nums.begin(), nums.end());
    int ans1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int ans2 = nums[0] * nums[1] * nums[n - 1];
    cout<<max(ans1,ans2);
    return 0;
}