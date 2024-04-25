// https://takeuforward.org/data-structure/change-every-letter-with-next-lexicographic-alphabet/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        int ascii = (int)(str[i]);
        if (ascii == 90)
        {
            str[i] = char(65);
        }
        else if (ascii == 122)
        {
            str[i] = char(97);
        }
        else if ((ascii >= 65 && ascii < 90) || (ascii >= 97 && ascii < 122))
        {
            str[i] = char(ascii + 1);
        }
    }
    cout << str;

    return 0;
}