#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
    int ages = 21;
    int n;
    cin >> n;

    vector<string>names;
    vector<char>grades;
    vector<int>avg;
    while(n--){
        string name;
        cin >> name;
        int age;
        cin >> age;
        if(age >= ages ){
            names.push_back(name);
        }
        char grade;
        cin >> grade;

        char gender;
        cin >> gender;
        if(gender == 'F'){
            grades.push_back(grade);
        }

    }
    for(int i = 0; i < names.size(); i++){
        cout<<names[i]<<" ";
    }

    double average = 0;
    for(int i = 0; i < grades.size(); i++){
        average +=int(grades[i]);
    }

    double ans = average / grades.size();

    cout<<fixed << setprecision(2) << ans;

    return 0;
}