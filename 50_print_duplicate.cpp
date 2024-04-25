// https://takeuforward.org/data-structure/print-all-the-duplicates-in-the-string/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string str;
    cin >> str;
    map<char, int> mp;
    for (char x : str)
    {
        mp[x]++;
    }

    for (auto const &it : mp)
    {
        if (it.second > 1)
        {
            cout << it.first << " " << it.second << endl;
        }
    }
    return 0;
}