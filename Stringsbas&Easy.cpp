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

