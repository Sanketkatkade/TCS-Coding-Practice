#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    long long int sum = 0;
    for(int i = m; i <= n; i++){
        sum += i * i * i;
        cout<<sum <<" ";

    }
    cout<<endl;
    cout<<sum;
    return 0;
}