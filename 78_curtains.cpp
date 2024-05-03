/*

TCS NQT Coding Question Day 3 Slot 2 - Question 1
A furnishing company is manufacturing a new collection of curtains. The curtains are of two colors aqua(a) and black (b). The curtains color is represented as a string(str) consisting of a's and b's of length N. Then, they are packed (substring) into L number of curtains in each box. The box with the maximum number of 'aqua' (a) color curtains is labeled. The task here is to find the number of 'aqua' color curtains in the labeled box.

Input :
bbbaaababa -> Value of str
3    -> Value of L

Output:
3   -> Maximum number of a's


*/


#include<iostream>
#include<string>
#include<climits>
using namespace std;

int main(){
    string str;
    cin >> str;
    int k;
    cin >> k;
    int ans = INT_MIN; 
    for(int i = 0; i < str.size(); i++){
        int count = 0;
        for(int j = i; j < i + k && j < str.size(); j++){
            if(str[j] == 'a'){
                count++;
            }
        }
        ans = max(count,ans);
    }
    cout<<ans;
    return 0;
}