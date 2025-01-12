class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.size() & 1) return false;

        int OpenCnt = 0;
        int CloseCnt = 0;
        int ChangeCnt = 0;

        for(int i=0;i<s.size();i++)
        {
            if(locked[i] == '0')ChangeCnt++;
            else if(s[i] == '(') OpenCnt++;
            else
            {
                // s[i] == ')'
                if(OpenCnt>0)OpenCnt--;
                else if(ChangeCnt >0) ChangeCnt--;
                else return false;
            } 
        }
             ChangeCnt=0;
       int n  =s.size();
        for(int i=n-1;i>=0;i--)
        {
            if(locked[i] == '0')
            {
                ChangeCnt++;
            }
            else if(s[i] == '0')
            {
                CloseCnt++;
            }
            else{
                // s[i] == '1'
                if(CloseCnt>0)
                {
                    CloseCnt--;
                }
                else if(ChangeCnt>0)
                {
                    ChangeCnt--;
                }
                else 
                {
                    return false;
                }
            }
        }
        return true;
    }
};