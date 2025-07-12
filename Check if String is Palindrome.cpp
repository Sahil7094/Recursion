// A string is said to be palindrome if the reverse of the string is the same as the original string. 
// In this article, we will check whether the given string is palindrome or not in C++.
// Examples
// Input: str = "ABCDCBA"
// Output: true
// Explanation: Reverse of the string str is "ABCDCBA". So, it is palindrome.
// Input: str= "ABCD"
// Output: false
// Explanation: Reverse of string str is "DCBA". So, it is not palindrome.
// Code :-

bool isPalindrome(string& s, int i){
  if(i>=s.size()/2) return true;
  if(s[i]!=s[s.size()-i-1]) return false;
  return isPalindrome(s,i+1);
}
