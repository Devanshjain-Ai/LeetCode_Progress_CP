class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>> temp = grid;
        for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < n ;j++){
                int k = (j - rowShift[i] + n )% n;
                temp[i][k] = grid[i][j];
            }
        }
        vector<vector<int>> final = temp;
        for (int j= 0 ; j< n ;j++){
            for (int i = 0 ; i< n ;i++){
                int l = (i - colShift[j] + n)%n;
                final[l][j] = temp[i][j];
            }
        }
        return final;
    }
};