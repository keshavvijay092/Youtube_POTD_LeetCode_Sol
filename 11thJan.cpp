class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<int,int>mp;
        
        // base case 
        if(s.size() < k) return false;
        for(auto i:s)
        {
            mp[i]++;
        }

        int oddFreq = 0;

        for(auto i:mp)
        {
            if(i.second & 1)
            {
                oddFreq++;
            }
        }
        if(k<oddFreq) return false;

     return true;
        
    }
};