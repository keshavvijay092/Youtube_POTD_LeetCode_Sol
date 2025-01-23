class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        int cntServer = 0;
        vector<int>row(m);
        vector<int>col(n);


        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
           {
            if(grid[i][j] == 1)
            {
                row[i]+=1;
                col[j]+=1;
            }
           }
        }
         
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 1 && (row[i]>1 || col[j] > 1) )
                {
                    cntServer++;
                }
            }
        }
        return cntServer;

    }
};