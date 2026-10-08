//Q1 Given an integer array arr[] and an integer k, find and return the kth smallest element in the given array.

class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());
        return arr[k - 1];
    }
};

//Q2 Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order. 

class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        
    }
};
