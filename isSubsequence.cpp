/* Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true */


class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0)
        return true;
        if(s.length()>t.length()) 
        return false;
        int k=0,n;
        for(int i=0;i<t.length();i++)
        {
           
            if(k<s.length())
            {
                n=0;
               if(s[k]==t[i])
               {
                  n=1;
                  k++;
               }
            }
            else
             break;

        }
        if(n==1 && k==s.length())
        return true;
        else
        return false;


    }
};
//Recursive approach

/* class Solution {
public:
    bool isSubSeq(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return isSubSeq(str1, str2, m-1, n-1); 
    // If last characters are not matching 
    return isSubSeq(str1, str2, m, n-1); 
} 
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        return isSubSeq(s,t,m,n);
    }
}; */
