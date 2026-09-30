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

// Q3.Find Square root

class Solution {
  public:
    int floorSqrt(int n) {
        // code here
        if(n < 2) {
            return 1;
        }
        
        int start = 0;
        int end = n;
        int ans = -1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(mid == n / mid) {
                return mid;
            } else if(mid < n / mid) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return ans;
    }
};

// Q4 Find how many time arr is rotated;
// Input: arr[] = [5, 1, 2, 3, 4]
//Output: 1
//Explanation: The given array is [5, 1, 2, 3, 4]. The original sorted array is [1, 2, 3, 4, 5]. We can see that the array was rotated 1 times to the right.

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int smallest = arr[0];
        int index = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] < smallest) {
                smallest = arr[i];
                index = i;
            }
        }
        
        return index;
    }
};

// Q5 Given a sorted array, arr[] containing only 0s and 1s, find the transition point, i.e., the first index where 1 was observed, and before that, only 0 was observed.  If arr does not have any 1, return -1. If array does not have any 0, return 0.
// nput: arr[] = [0, 0, 0, 1, 1]
// Output: 3
// Explanation: index 3 is the transition point where 1 begins.
// Input: arr[] = [0, 0, 0, 0]
// Output: -1
// Explanation: Since, there is no "1", the answer is -1.
// Input: arr[] = [1, 1, 1]
// Output: 0

class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int start = 0;
        int end = arr.size() - 1;
        int index = -1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] == 1) {
                index = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
            
        }
        
        return index;
    }
};

// Q6 A sorted array of distinct elements arr[] is rotated at some unknown point, the task is to find the minimum element in it. 

// Examples:

// Input: arr[] = [5, 6, 1, 2, 3, 4]
// Output: 1
// Explanation: 1 is the minimum element in the array.
// Input: arr[] = [3, 1, 2]
// Output: 1
// Explanation: Here 1 is the minimum element.

class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int start = 0;
        int end = arr.size() - 1;
        
        while(start < end) {
            int mid = start + (end - start) / 2;
            
            if(arr[mid] > arr[end]) {
                start = mid + 1;
            } else {
                end = mid;
            }
            
        }
        return arr[start];
    }
};

// Q7 You have given two sorted arrays a[] & b[] of distinct elements. The first array has one element extra added in between. Return the index of the extra element.

// Note: 0-based indexing is followed.

// Examples

// Input: a[] = [2,4,6,8,9,10,12], b[] = [2,4,6,8,10,12]
// Output: 4
// Explanation: In the first array, 9 is extra added and it's index is 4.

class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        // code here
        int start = 0;
        int end = b.size() - 1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(a[mid] == b[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return start;
    }
};
