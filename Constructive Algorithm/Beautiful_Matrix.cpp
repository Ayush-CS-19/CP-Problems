#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> mat(5, vector<int>(5, 0));
    int row = 0;
    int cols = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                row = i;
                cols = j;
            }
        }
    }
    // if(row == 2 && cols == 2){
    //     cout << 0 << " ";
    // }
    // else if(row == 2){
    //     cout << abs(cols - 2) << endl;
    // }
    // else if(cols == 2){
    //     cout << abs(row - 2) << endl;
    // }
    // else{
        cout << abs(row - 2) + abs(cols - 2) << endl;
    // }
        return 0;
}