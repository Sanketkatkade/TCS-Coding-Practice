// https://takeuforward.org/data-structure/count-the-number-of-words-in-a-given-string/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int count = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    cout << count;
    return 0;
}