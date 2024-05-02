// https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int first = 0;
    int second = 1;
    int res = 0;
    // cout<<first<<" "<<second<<" ";
    for (int i = 2; i <= n; i++)
    {
        int next = first + second;
        first = second;
        second = next;
        res = next;
    }
    cout << res;

    return 0;
}