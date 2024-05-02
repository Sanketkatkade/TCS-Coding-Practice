/*

You are given two integers, m and n. Your task is to find the sum of the cubes of all integers from m to n, inclusive.
Write a function sum_of_power_of_cubes(m, n) that takes in two integers m and n, where m is the higher range and n is the lower range, and returns the sum of the cubes of all integers from m to n.

Input:
2
5
Output:
224

*/

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin >>m>>n;
    int ans = 0;
    for(int i = m; i <=n; i++){
        ans += (i * i * i);
    }
    cout<<ans<<endl;
    return 0;
}