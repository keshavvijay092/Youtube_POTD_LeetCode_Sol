class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        int n = s.size();
        for(auto i:s)
        {
            mp[i]++;
        }
        
        int ans = 0;
        for(auto i:mp)
        {
            while(i.second>=3)
            {
                ans+=2;
                i.second-=2;
            }
        }
        return n - ans;
    }
};