class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();

        vector<int> rowCnt(m,n);
        vector<int>colCnt(n,m);

        map<int,pair<int,int>>mp;

        // storing the value of position of each element from mat 
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mp[mat[i][j]] = {i,j};
            }
        } 

        for(int i=0;i<arr.size();i++)
        {
            int val = arr[i];

            auto[row,col] = mp[val];
            
            rowCnt[row]--;
            colCnt[col]--;

            if(rowCnt[row] == 0 | colCnt[col] == 0)
            {
                return i;
            }
        }
        return -1;


    }
};
