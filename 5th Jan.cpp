// Optimally Solution 
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
           int n = shifts.size();
        for(int i=0;i<n;i++)
        {
            int start = shifts[i][0];
            int end = shifts[i][1];
            int dir = shifts[i][2];

            for(int j=start ;j<=end ;j++)
            {
                if(dir == 1 )
                {
                    // means forward 
                  s[j]++;
                 if (s[j] > 'z') {
                 s[j] = 'a';
                                  }
                }
                else{
                    // direction negative hai 
                  s[j]--;
                 if (s[j] < 'a') {
                  s[j] = 'z';
                   }
                }
            }
        }
        return s; 
       
       
    }
};



// Brute Force 
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
          
        int n = shifts.size();
        for(int i=0;i<n;i++)
        {
            int start = shifts[i][0];
            int end = shifts[i][1];
            int dir = shifts[i][2];

            for(int j=start ;j<=end ;j++)
            {
                if(dir == 1 )
                {
                    // means forward 
                  s[j]++;
                 if (s[j] > 'z') {
                 s[j] = 'a';
                                  }
                }
                else{
                    // direction negative hai 
                  s[j]--;
                 if (s[j] < 'a') {
                  s[j] = 'z';
                   }
                }
            }
        }
        return s; 
       
    }
};

