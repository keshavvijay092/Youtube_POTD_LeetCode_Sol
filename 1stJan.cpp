#include<iostream>
#include<algorithm>

using namespace std;
int maxScore(string s)
{
    // Brute Force 
// int n = s.size();
//         int maxi = 0;
       
//         for(int i=0;i<n-1;i++)
//         {
//             int curr = 0;

//             for(int j=0;j<=i;j++)
//             {
//                 if(s[j] == '0')
//                 curr++;
//             }
//             for(int k=i+1;k<n;k++)
//             {
//                 if(s[k] == '1')
//                 curr++;
//             }
//           maxi = max(maxi,curr); 
//         }
//         return maxi;

// Optimal Solution 
int ones = count(s.begin(),s.end(),'1');
        int zeros = 0;
        int ans = 0;
        int n = s.size();
        for(int i=0;i<n-1;i++)
        {
            if(s[i] == '1')ones--;
            else zeros++;

            ans = max(ans,ones+zeros);
        }
        return ans;

}
int main()
{
    string s;
    cin>>s;

    int ans = maxScore(s);
    cout<<"The sum is: "<<ans<<endl;
    return 0;
}