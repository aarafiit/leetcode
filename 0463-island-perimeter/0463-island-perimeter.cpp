class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size(); // Number of rows in the grid
        int cols = grid[0].size(); // Number of columns in the grid
        int permtr = 0;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == 1){
                    permtr += 4;
                    if(i > 0 && grid[i-1][j] == 1) permtr -= 2;
                    if(j > 0 && grid[i][j-1] == 1) permtr -= 2;
                }
            }
        }
        return permtr;
    }
};