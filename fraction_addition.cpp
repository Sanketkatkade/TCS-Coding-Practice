#include <iostream>
using namespace std;
#include <algorithm>


int main() {
    int a = 3;
    int b = 4;
    int c= 5;
    int d = 6;
    int nu = (a * d) + (b * c);
    int de = (b * d);
    int gcd = __gcd(nu,de);
    cout<<int(nu/gcd)<<"/"<<int(de/gcd);
    

    return 0;
}