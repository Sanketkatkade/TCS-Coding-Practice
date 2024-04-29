#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentsum;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int currentsum = 0;
        for (int j = i; j < n; j++)
        {
            currentsum += arr[j];
            if (currentsum == k)
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}