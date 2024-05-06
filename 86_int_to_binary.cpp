#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string binary = "";
    if (n == 0)
    {
        binary = "0";
    }
    else
    {
        while (n)
        {
            if (n % 2 == 0)
            {
                binary = "0" + binary;
            }
            else{
                binary = "1" + binary;
            }
            n /= 2;
        }
    }
    cout<<binary;
    return 0;
}