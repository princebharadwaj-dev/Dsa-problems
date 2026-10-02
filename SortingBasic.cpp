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

//Q3 Given an array arr[] of integers, rearrange its elements in any order to maximize the value of:
// Input: arr[] = [5, 3, 2, 4, 1]
// Output: 40
// Explanation: If we arrange the array as [1, 2, 3, 4, 5] then we can see that the minimum index will multiply with minimum number and maximum index will multiply with maximum number. So, 1*0 + 2*1 + 3*2 + 4*3 + 5*4 = 0+2+6+12+20 = 40 mod(109+7) = 40

class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // code here
        int n = arr.size();
        long long sum = 0;
        
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n; i++){
            sum = sum + arr[i] * i;
        }
        
        return sum;
    }
};

// Q4 Given an array arr[] of positive integers.The task is to complete the insertsort() function which is used to implement Insertion Sort.

class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        for(int i = 1; i < n; i++) {
            for(int j = i; j > 0; j--) {
                if(arr[j] < arr[j - 1]) {
                    swap(arr[j],arr[j -1]);
                } else {
                    break;
                }
            }
        }
    }
};

