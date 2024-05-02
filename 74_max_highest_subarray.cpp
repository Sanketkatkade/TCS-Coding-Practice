/*

    List of max elements in contiguous sub-array of given k from main array

    Input:
    3,6,7,1,6,3
    3
    Output:
    7 7 7 6
    Explanation: Maximum element in contiguous sub-array of size 3
    in first subarray of size 3 [3,6,7] max is 7
    in next subarray of size 3 [6,7,1] max is 7...

*/

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int maxi = arr[i];
        for (int j = i; j < i + k; j++)
        {
            if (i + k > n)
            {
                return 0;
            }
            maxi = max(arr[j], maxi);
        }
        cout << maxi << " ";
    }

    return 0;
}