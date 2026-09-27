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
