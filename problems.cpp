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

// Q3 
