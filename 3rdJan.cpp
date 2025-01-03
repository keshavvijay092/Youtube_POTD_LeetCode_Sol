Optimal solution

// long long int sum =0,left = 0;
        // int cnt = 0;
        // int n = nums.size();

        // for(auto val:nums)
        // {
        //     sum+=val;
        // }

        // for(int i=0;i<n-1;i++)
        // {
        //     sum = sum-nums[i];
        //     left = left+nums[i];

        //     if(left>=sum) cnt++;
        // }
        // return cnt;



Brute Force 

    class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        // Loop through every possible split point
        for (int i = 1; i < n; i++) {
            int leftsum = 0, rightsum = 0;

            // Calculate left sum (sum of elements from 0 to i-1)
            for (int j = 0; j < i; j++) {
                leftsum += nums[j];
            }

            // Calculate right sum (sum of elements from i to n-1)
            for (int j = i; j < n; j++) {
                rightsum += nums[j];
            }

            // If left sum is greater than right sum, increment the count
            if (leftsum > rightsum) {
                cnt++;
            }
        }

        return cnt;
    }
};

