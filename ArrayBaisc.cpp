// Basic

// Q1 You are given an array arr of numbers. Return the sum of all the elements except the first and last elements.

class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        
        for(int i = 1; i < n - 1; i++){
            sum += arr[i];
        }
        
        return sum;
    }
};

//Q2 Given an array arr[] containing distinct positive integers, and two integers start and end defining a range. Determine if the array contains all elements within inclusive range [start, end].

class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i = start; i <= end; i++){
            bool found = false;
            for(int j = 0; j < n; j++){
                if(arr[j] == i) {
                    found = true;
                    break;
                }
            }
            
            if(found == false) {
                return false;
            }
        }
        
        return true;
    }
};

// Q3 // Given an array arr[], swap the kth element from the beginning with the kth element from the end.

// Note: 1-based indexing is followed.


class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        int beg = k - 1;
        int end = n - k;
        
        swap(arr[beg],arr[end]);
        

    }
};

// Q4 // Given an array arr of distinct elements, the task is to return an array of elements that have at least two greater elements.

// Examples:

// Input: arr[] = [2, 8, 7, 1, 5]
// Output: [1, 2, 5] 

class Solution {
  public:
    vector<int> findElements(vector<int> &arr) {

        int n = arr.size();
        int largest = INT_MIN;
        int secLargest = INT_MIN;

        for(int i = 0; i < n; i++) {
            if(arr[i] > largest) {
                secLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secLargest && arr[i] != largest) {
                secLargest = arr[i];
            }
        }

        vector<int> ans;

        for(int i = 0; i < n; i++) {
            if(arr[i] < secLargest) {
                ans.push_back(arr[i]);
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};

// Q5 Given an array arr[] of non-negative integers, move all the zeros to the end of the array while maintaining the relative order 
//of the non-zero elements. Perform the operation in place, without using an extra array.

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        int j = 0;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] != 0) {
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }
};



