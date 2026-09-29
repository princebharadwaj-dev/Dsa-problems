// Searching Basic questions

// Binary Search

// Q1.Given an array arr[], sorted in ascending order and an integer k. Return true if k is present in the array, otherwise, false.

class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        
        while(start <= end){
            int mid = start+(end - start) / 2;
            
            if(arr[mid] == k){
                return true;
            } else if(arr[mid] < k) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return false;
    }
};

// Q2 Given a sorted array arr consisting of 0s and 1s. The task is to find the index (0-based indexing) of the first 1 in the given array.
// NOTE: If one is not present then, return -1.

class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        int start = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(arr[mid] == 1) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};
