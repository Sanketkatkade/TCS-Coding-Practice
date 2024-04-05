// Find all factors of a Natural Number in sorted order

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n = 100;
    vector<int> res;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            res.push_back(i);
        }
    }
    
    sort(res.begin(), res.end()); 
    
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    
    return 0;
}
