class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int>ans;

        for(int i=0;i<n;i++)
        {
            int currSum = 0;
            // it will help to iterate from 0th index to  last index and stores the absolute sum respect to all index

            for(int k=0;k<n;k++)
            {
                // this loop runs because we need to check for every individual 
                //    for the min distance 

                if(boxes[k] == '1' && i != k)
                {
                    currSum+=abs(k-i);
                }
            }
            ans.push_back(currSum);
        }
        return ans;
    }
};