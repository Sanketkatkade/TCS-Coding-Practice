#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int main(){
     int grid[4][4] = {
        {9, 9, 8, 1},
        {5, 6, 2, 6},
        {8, 2, 6, 4},
        {6, 2, 2, 2}
    };

    int rows = sizeof(grid) / sizeof(grid[0]); 
    int cols = sizeof(grid[0]) / sizeof(grid[0][0]); 

    vector<vector<int>>res(rows - 2, vector<int>(cols - 2));

    for(int i = 0; i < rows - 2; i++){
        for(int j = 0; j < cols - 2; j++){
            int ans = INT_MIN;
            for(int x = i; x < i + 3; x++){
                for(int y = j; y < j + 3; y++){
                    ans = max(grid[x][y], ans);
                }
            }
            res[i][j] = ans;
        }
    }

    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
