class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
       
          int n = B.size();
          vector<int>cnt(n+1,0);
          vector<int>ans;
        int val = 0;
          for(int i=0;i<n;i++)
          {
            cnt[A[i]]++;
            cnt[B[i]]++;
            if(cnt[A[i]] == 2) val++;
            if( A[i] != B[i] && cnt[B[i]] == 2) val++;

            ans.push_back(val);
          }
          return ans;
       
       
        // map<int,int>mp;
        // int n = A.size();
        // int cnt = 0;
        // vector<int>ans;
        // for(int i=0;i<n;i++)
        // {
        //     mp[A[i]]++;
        //     mp[B[i]]++;
            
        //     if(A[i] != B[i])
        //     {
        //     if(mp[A[i]] == 2) cnt++;
        //     if(mp[B[i]] == 2) cnt++;
        //     }
        //     else{
        //          if(mp[A[i]] == 2) cnt++;
        //          else if (mp[B[i]] == 2) cnt++;
        //     }
        //     ans.push_back(cnt);
        // }
        // return ans;

    }
};