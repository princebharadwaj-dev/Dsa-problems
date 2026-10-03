// Q1 You are given a string s, and your task is to reverse the string.
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int start = 0; int end = s.size() - 1;
        
        while(start < end) {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
        return s;
    }
};

// Q2 Given a string s, find if it is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int start = 0; int end = s.size() - 1;
        
        while(start < end) {
            swap(s[start],s[end]);
            start++;
            end--;
        }
        
        return s;
    }

// Q3 Given two strings txt and pat, return the 0-based index of the first occurrence of the substring pat in txt. If pat is not found, return -1.

class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {

        int n = txt.size();
        int m = pat.size();

        for (int i = 0; i <= n - m; i++) {
            int j;

            for (j = 0; j < m; j++) {
                if (txt[i + j] != pat[j]) {
                    break;
                }
            }

            if (j == m) {
                return i;
            }
        }

        return -1;
    }
};


