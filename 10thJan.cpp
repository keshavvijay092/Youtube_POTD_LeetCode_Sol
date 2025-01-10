class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

          int n = words1.size();
          int m = words2.size();
          vector<int>Maxi(26,0);
          for(int i=0;i<m;i++)
          {
               vector<int>freq(26,0);
               for(int j=0;j<words2[i].size();j++)
               {
                char ch = words2[i][j];
                freq[ch-'a']++; 
               }

               for(int x=0;x<26;x++)
               {
                Maxi[x] = max(freq[x],Maxi[x]);
               }
          }
               vector<string>result;

            for(int i=0;i<words1.size();i++)
            {}
                vector<int>freq(26,0);

                for(int j=0;j<words1[i].size();j++)
                {
                    char ch = words1[i][j];
                    freq[ch-'a']++;
                }

                bool isPossible = true;
                for(int k=0;k<26;k++)
                {
                    if(freq[k]<Maxi[k])
                    {
                        isPossible = false;
                        break;
                    }
                }

                if(isPossible) 
                {
                    result.push_back(words1[i]) ;
                }
            }
               return result; 
       }
};