// https://takeuforward.org/data-structure/remove-all-vowels-from-the-string/ 


#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    for(int i = 0; i < str.size(); i++){
        str[i] = tolower(str[i]);
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str.erase(i,1);
            i--;
        }
    }
    cout<<str<<endl;
    return 0;
}