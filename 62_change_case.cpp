// https://takeuforward.org/data-structure/change-case-of-each-character-in-a-string/


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;
//     cin >> str;

//     for(int i = 0; i < str.size(); i++){
//         if(isupper(str[i])){
//             str[i] = tolower(str[i]);
//         }
//         else if(islower(str[i])){
//             str[i] = toupper(str[i]);
//         }
//     }
//     cout<<str;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
    }
    cout<<str;
    return 0;
}