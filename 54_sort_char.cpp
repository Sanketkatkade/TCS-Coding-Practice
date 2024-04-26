// https://takeuforward.org/data-structure/write-a-program-to-sort-characters-in-a-string/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    cout << str;
    return 0;
}