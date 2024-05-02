// https://www.geeksforgeeks.org/find-subarray-with-given-sum-in-array-of-integers/

#include <iostream>
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
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                cout << "The sum found between the indices " << i << " and " << j << endl;
                return 0;
            }
        }
    }
    cout << "No subarray with given sum exists" << endl;
    return 0;
}