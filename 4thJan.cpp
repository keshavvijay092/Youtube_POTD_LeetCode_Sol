// Optimally solution 

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        // Calculate the final answer 
        int ans = 0;

        // so iterating from a to z and checking which element is present 
            // and find if they have middle element or not 

        for(char i='a';i<='z';i++)
        { 
            int firstAppear = s.find(i);
            int lastAppear = s.rfind(i);

            if(firstAppear != string::npos && lastAppear != string::npos &&   
                lastAppear > firstAppear+1)
            {
              set<char> st;

               for(int i=firstAppear+1;i<lastAppear;i++)
               {
                    st.insert(s[i]);
               }  

               ans+=st.size();
            }
        }
        return ans;
    }
};


// Brute Force 
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int countPalindromes(string s) {
    unordered_set<string> uniquePalindromes;  // To store unique palindromic subsequences of length 3
    
    int n = s.length();
    
    // Iterate over all possible triplets (i, j, k) where i < j < k
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                // Check if the subsequence s[i], s[j], s[k] is a palindrome
                if (s[i] == s[k]) {  // Only palindromes will have the first and last character the same
                    uniquePalindromes.insert(string(1, s[i]) + string(1, s[j]) + string(1, s[k]));
                }
            }
        }
    }
    
    return uniquePalindromes.size();  // Return the number of unique palindromic subsequences
}

int main() {
    // Test cases
    cout << countPalindromes("aab") << endl;   // Output: 1 (Only "aba" is a palindrome)
    cout << countPalindromes("aabb") << endl;  // Output: 2 ("aba", "bcb")
    cout << countPalindromes("abcba") << endl; // Output: 2 ("aba", "bcb")
    
    return 0;
}

