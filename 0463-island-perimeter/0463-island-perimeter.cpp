class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int c = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {

                if(i == 0 && j == 0)
                {
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                         tc = 4;

                        if(i < n-1 && grid[i+1][j] == 1) tc--;
                        if(j < m-1 && grid[i][j+1] == 1) tc--;

                        c += tc;
                    }
                }
                else if(i == 0 && j == m-1)
                {
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                        tc = 4;
                        
                        if(i < n-1 && grid[i+1][j] == 1) tc--;
                        if(grid[i][j-1] == 1) tc--;
                        c += tc;
                    }
                }
                else if(i == n-1 && j == 0)
                {   
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                        tc = 4;
                    
                        if(grid[i-1][j] == 1) tc--;
                        if(j < m-1 && grid[i][j+1] == 1) tc--;
                        c += tc;
                    }
                }
                else if(i == n-1 && j == m-1)
                {
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                         tc = 4;
                    
                        if(grid[i-1][j] == 1) tc--;
                        if(grid[i][j-1] == 1) tc--;
                        c += tc;
                    }
                }
                else if(i == 0)
                {
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                         tc = 4;
                    
                        if(i < n-1 && grid[i+1][j] == 1) tc--;
                        if(grid[i][j-1] == 1) tc--;
                        if(j < m-1 && grid[i][j+1] == 1) tc--;

                        c += tc;
                    }
                }
                else if(j == 0)
                {
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                        tc = 4;
                    
                        if(grid[i-1][j] == 1) tc--;
                        if(i < n-1 && grid[i+1][j] == 1) tc--;
                        if(j < m-1 && grid[i][j+1] == 1) tc--;
                        c += tc;
                    }
                }
                else if(i == n-1)
                {
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                         tc = 4;
                    
                        if(grid[i-1][j] == 1) tc--;
                        if(grid[i][j-1] == 1) tc--;
                        if(j < m-1 && grid[i][j+1] == 1) tc--;
                        c += tc;
                    }
                }
                else if(j == m-1)
                {
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                         tc = 4;

                        if(grid[i-1][j] == 1) tc--;
                        if(i < n-1 && grid[i+1][j] == 1) tc--;
                        if(grid[i][j-1] == 1) tc--;
                        c += tc;
                    }
                }
                else
                {
                    int tc = 0;
                    if(grid[i][j] == 1)
                    {
                         tc = 4;

                        if(grid[i-1][j] == 1) tc--;
                        if(i < n-1 && grid[i+1][j] == 1) tc--;
                        if(grid[i][j-1] == 1) tc--;
                        if(j < m-1 && grid[i][j+1] == 1) tc--;
                        c += tc;
                    }
                }

            }
        }

        return c;
    }
};

