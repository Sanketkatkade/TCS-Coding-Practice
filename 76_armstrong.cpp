// /*

// Given a number x, determine whether the given number is Armstrong's number or not.
// A positive integer of n digits is called an Armstrong number of order n (order is the number of digits) if
// abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ....

// EG
// 153 is an Armstrong number.
// 1*1*1 + 5*5*5 + 3*3*3 = 153

// */

// #include <iostream>
// #include <vector>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;
//     vector<int> v;

//     int originalnum = num;
//     int n = 0;
//     while (num > 0)
//     {
//         int digit = num % 10;
//         v.push_back(digit);
//         num /= 10;
//         n++;
//     }
//     int ans = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         ans += pow(v[i], n);
//     }
//     if (originalnum == ans)
//     {
//         cout << "True";
//     }
//     else
//     {
//         cout << "False";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cin >> num;
    vector<int> ans;
    string str = to_string(num);
    int n = str.size();
    for (int i = 0; i < str.size(); i++)
    {
        int number = str[i] - '0';
        ans.push_back((pow(number, n)));
    }
    int sum = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        sum += ans[i];
        // cout<<ans[i]<<" ";
    }
    if (num == sum)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}
