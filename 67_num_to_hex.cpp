// https://leetcode.com/problems/convert-a-number-to-hexadecimal/description/


#include<iostream>
#include<sstream>
using namespace std;

int main(){
    int num = -1;
    // cout<<"hexadecimal "<<hex<<num<<endl;

    stringstream ss;
    ss << hex << num;
    string hexstr = ss.str();
    cout<<hexstr<<endl; 
    return 0;
}