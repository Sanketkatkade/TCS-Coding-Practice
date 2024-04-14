#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool isvowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
    int vowel = 0;
    int special = 0;
    int consonant = 0;
    int digit = 0;
    string str = " A1 B@ d  adc";
    for(int i = 0; i < str.size(); i++){
        str[i] = tolower(str[i]);
    }

    for(int i = 0; i < str.size(); i++){
        if(isvowel(str[i])){
            vowel++;
        }
        else if(isalpha(str[i])){
            consonant++;
        }
        else if(isdigit(str[i])){
            digit++;
        }
        else if(isspace(str[i])){
            special++;
        }
        else{
            special++;
        }
    }

    cout<<"vowel"<<" "<<vowel<<endl;
    cout<<"digit"<<" "<<digit<<endl;
    cout<<"consonant"<<" "<<consonant<<endl;
    cout<<"special"<<" "<<special<<endl;

    return 0;
}