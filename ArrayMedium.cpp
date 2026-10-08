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

//You are given two arrays a[] and b[], return the Union of both the arrays in any order.
//The Union of two arrays is a collection of all distinct elements present in either of the arrays.
//If an element appears more than once in one or both arrays, it should be included only once in the result.

class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> s(a.begin(), a.end());
        s.insert(b.begin(), b.end());

        return vector<int>(s.begin(), s.end());
    }
};
