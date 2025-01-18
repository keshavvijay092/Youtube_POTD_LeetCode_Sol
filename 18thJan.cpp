class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();


        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<>>pq;
        vector<vector<int>>cost(m,vector<int>(n,INT_MAX));

        vector<vector<int>>directions = {{0,1},{0,-1},{1,0},{-1,0}};

        pq.push({0,0,0});
        cost[0][0] = 0;

        while(!pq.empty())
        {
            auto [currCost,x,y] = pq.top();
            pq.pop(); 


            if(x == m-1 && y == n-1) return currCost;


            for(int i=0;i<4;i++)
            {
                int nx = x + directions[i][0]; 
                int ny = y + directions[i][1];

                int newcurr = currCost + (i+1 == grid[x][y] ? 0 :1);


                if(nx>=0 && nx<m && ny>=0 && ny<n && newcurr < cost[nx][ny])
                {
                    cost[nx][ny] = newcurr;
                    pq.push({newcurr,nx,ny});
                }
            }
        }
return -1;
    }
};