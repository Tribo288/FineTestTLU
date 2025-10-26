#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int m , n ; cin >> m >> n;
    //tao mang dau vao
    vector<vector<int>> arr(m, vector<int>(n));
    //nhap dl
    for (int i = 0 ;i < m ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }
    //tao mang dp
     vector<vector<int>> dp(m, vector<int>(n, -1e9));
    //tao cot dau trong mang dp
    for (int i = 0 ; i < m ; i++){
        dp[i][0] = arr[i][0];
    }
    
    //xy li tung cot
    for (int j = 1; j < n; j++){ //theo cot
        for (int i = 0 ; i < m; i++ ){  // theo hang
            int best_prev = dp[i][j-1]; // gia su tot nhat la phan tu ben trai
            if (i > 0){
                best_prev = max(best_prev,dp[i-1][j-1]);
            }
            if (i < m-1){
                best_prev = max(best_prev,dp[i+1][j-1]);
            }
            dp[i][j] = best_prev+arr[i][j];           
        }
    }
    //tim max o cot cuoi
    int max = dp[0][n-1];
    for (int i = 1 ; i < m ; i++){
        if (dp[i][n-1] > max){
            max = dp[i][n-1];
        }
    }
    //in kq
    cout << max;
}
