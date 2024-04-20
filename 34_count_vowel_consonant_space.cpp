// https://takeuforward.org/data-structure/count-number-of-vowels-consonants-spaces-in-string/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int vowel = 0;
    int consonant = 0;
    int space = 0;

    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);

        if (isalpha(str[i]))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowel++;
            }
            else
            {

                consonant++;
            }
        }
        if (str[i] == ' ')
        {
            space++;
        }
    }

    cout << "Vowel " << vowel << endl;
    cout << "consonant " << consonant << endl;
    cout << "Space " << space << endl;
    return 0;
}