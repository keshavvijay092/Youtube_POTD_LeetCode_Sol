class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n = words.size();
         vector<string> ans;

         for(int i=0;i<n;i++)
         {
            string checkString = words[i];
            for(int j=0;j<n;j++)
            {
                if(i != j &&  words[j].find(checkString) != string::npos)
                {
                    ans.push_back(checkString);
                    break;
                }
            }
        }
        return ans;
    }    
};