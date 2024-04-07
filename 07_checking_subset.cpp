// Check if array is subset of another array
#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector<int>arr1 = {1,3,4,5,2,233};
    vector<int>arr2 = {2,4,3,1,7,5,15};
    map<int,int>mp1,mp2;
    for(auto x : arr1){
        mp1[x]++;
    }
    for(auto x : arr2){
        mp2[x]++;
    }
    int count = 0;
    for(const auto& it : mp1){
        if(it.second == mp2[it.first]){
            count++;
        }
    }
    if(count == arr1.size()){

            cout<<"arr1 is  subset of arr2"<<endl;
    }
    else{
            cout<<"arr1 is not subset of arr2"<<endl;

    }
    
    return 0;
}