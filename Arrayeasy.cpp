// Array Easy Questions
//Q1 // You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

// Examples:

// Input: arr = [16, 17, 4, 3, 5, 2]
// Output: [17, 5, 2]

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        int maxRight = arr[n - 1];
        
        vector<int> leaders;
        leaders.push_back(arr[n - 1]);
        
        for(int i = n - 2; i >= 0; i-- ) {
            if(arr[i] >= maxRight) {
                leaders.push_back(arr[i]);
                maxRight = arr[i];
            }
        }
        
        reverse(leaders.begin(),leaders.end());
        
        return leaders;
    }
};

// Q2 find second largest in array

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        int largest = INT_MIN;
        int secLargest = INT_MIN;
        
        for(int i = 0; i < n; i++){
            if(arr[i] > largest) {
                secLargest = largest;
                largest = arr[i];
            } else if(arr[i] > secLargest && arr[i] != largest) {
                secLargest = arr[i];
            }
            
        }
        
        if(secLargest == INT_MIN) {
            return -1;
        }
        
        return secLargest;
    }
};

// Q3 Given a sorted array arr[] and a number target, find the number of occurrences of target in given array. 

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == target) {
                count++;
            }
        }
        
        return count;
    }
};

// Q4 Given an array arr[] consisting of only 0's and 1's. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        
        while(start < end) {
            if(arr[start] == 0){
                start++;
            } else if(arr[end] == 0){
                swap(arr[start],arr[end]);
                start++;
                end--;
            } else {
                end--;
            }
        }
        
    }
};

// Q5 You are given an array of integers arr[]. You have to reverse the given array.

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int start = 0;
        int end = arr.size() - 1;

        while (start < end) {
            swap(arr[start], arr[end]);

            start++;
            end--;
        }
    }
};

