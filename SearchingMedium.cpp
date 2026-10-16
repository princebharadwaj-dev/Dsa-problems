// Q1 return peak in arr
class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();

        int start = 0;
        int end = n - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid;
            }
        }

        return start;
    }
};

//Given a sorted array arr[] with possibly some duplicates, find the first and last occurrences of an element x in the given array.
//Input: arr[] = [1, 3, 5, 5, 5, 5, 67, 123, 125], x = 5
//Output: [2, 5]
//Explanation: First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5

class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        int firstOccur = -1;
        int lastOccur = -1;

        // First occurrence
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {
                firstOccur = mid;
                end = mid - 1;
            }
            else if (arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        // Last occurrence
        start = 0;
        end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == x) {
                lastOccur = mid;
                start = mid + 1;
            }
            else if (arr[mid] < x) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return {firstOccur, lastOccur};
    }
};
