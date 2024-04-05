#include<iostream>
#include<map>
using namespace std;

int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        map<int,int>mp;
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++){
            if(mp[arr[i]] == 1){
                return arr[i];
            }
        }
        return 0;
    }

int main(){
    int arr[5] = {-1, 2, -1, 3, 2};
    cout<<firstNonRepeating(arr,5);
    
    return 0;
}