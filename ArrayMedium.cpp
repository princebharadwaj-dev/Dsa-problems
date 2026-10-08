//Q1 Given an integer array arr[] and an integer k, find and return the kth smallest element in the given array.

class Solution {
public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());
        return arr[k - 1];
    }
};

//Q2 
