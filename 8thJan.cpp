class Solution {
public:
    bool IsPrefixAndSuffix(string checkString,string words)
    {
        int n1 = checkString.size();
        int n2 = words.size();

        if(n1 > n2)return false;
        if(words.substr(0,n1) == checkString && words.substr(n2-n1,n2) == checkString )
            return true;

    return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        int n = words.size();
        for(int i=0;i<n;i++)
        {
            string check = words[i];
            for(int j=i+1;j<n;j++)
            {
                    if(IsPrefixAndSuffix(check,words[j]))
                    {
                        ans++;
                    }
            }
        }
        return ans;
    }
};