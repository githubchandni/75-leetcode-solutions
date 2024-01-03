/*For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
  */
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return((str1+str2==str2+str1)?    //it will be equal only if gcd exists
        str1.substr(0,gcd(str1.size(),str2.size())):"");
    }
};
