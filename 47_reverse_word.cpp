// // https://takeuforward.org/data-structure/reverse-words-in-a-string/

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str;
//     getline(cin,str);
//     string res;
//     int wordstart = 0;
//     for(int i = 0; i < str.size(); i++){
//         if(str[i] == ' '){
//             string word = str.substr(wordstart, i - wordstart + 1);
//             wordstart = i + 1;
//             res = word + res;
//         }
//         else if( i == str.length() - 1){
//             string word = str.substr(wordstart, i - wordstart + 1);
//             wordstart = i + 1;
//             res = word +" "+ res;
//         }
//     }   
//     cout<<res;
//     return 0;
// }



#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    vector<string>res;
    string temp = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            temp += str[i];
        }
        else if(str[i] == ' '){
            res.push_back(temp);
            temp = "";
        }
    }

    res.push_back(temp);

    for(int i = res.size() - 1; i >= 0; i--){
        cout<<res[i]<<" ";
    }
    
    return 0;
}