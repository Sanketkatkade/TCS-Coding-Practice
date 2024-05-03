#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    int ans = INT_MAX;
    for(int i = 0; i < k; i++){
        sum += arr[i];
    }
    ans = sum;

    for(int i = 1; i < n - k + 1; i++){
        sum = sum - arr[i - 1] + arr[i+k-1];
        ans = min(sum, ans);
    }
    cout<<ans;
    return 0;
}