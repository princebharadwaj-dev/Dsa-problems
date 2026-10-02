// Q1 Given an array arr[]. Sort the array using bubble sort algorithm.

class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i = n - 2; i >= 0; i--){
            bool swapped = 0;
            for(int j = 0; j <= i; j++){
               if(arr[j] > arr[j + 1]) {
                   swapped = 1;
                   swap(arr[j],arr[j+1]);
               }
            }
        }
    }
};

// Q2 Given an array, arr[] and an integer x, return true if there exists a pair of elements in the array whose absolute difference is x, otherwise, return false.
// Examples:
// Input: arr[] = [5, 20, 3, 2, 5, 80], x = 78
// Output: true
// Explanation: Pair (2, 80) have an absolute difference of 78

class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {

        int n = arr.size();

        sort(arr.begin(), arr.end());

        int i = 0;
        int j = 1;

        while(j < n) {

            int diff = arr[j] - arr[i];

            if(diff == x) {
                return true;
            }
            else if(diff < x) {
                j++;
            }
            else {
                i++;
            }

            if(i == j) {
                j++;
            }
        }

        return false;
    }
};
