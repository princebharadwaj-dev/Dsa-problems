//  Q1. Given a sorted array arr[] and an integer k, find the position(0-based indexing) at which k is present in the array using binary search. If k doesn't exist in arr[] return -1. 
// Note: If multiple occurrences are there, please return the smallest index.
// Examples:
// Input: arr[] = [1, 2, 3, 4, 5], k = 4
// Output: 3
// Explanation: 4 appears at index 3.

// Solution

class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
    
        
        for(int i = 0; i < n; i++){
            if(arr[i] == k){
             return i;
            }
        }
        
        return -1;
        
        
    }
};

// Q2.Given a sorted array arr[] and an integer x, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the floor of x. If such an element does not exist, return -1
// Input: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
// Output: 1
// Explanation: Largest number less than or equal to 5 is 2, whose index is 1.

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int ans = -1;
        
        while(start <= end) {
           int mid = start + (end - start) / 2;
            if(arr[mid] <= x) {
                ans = mid;
                start = mid + 1;
            } else {
                end = end - 1;
            }
        }
        
       return ans;
    }
};

// Q3.
