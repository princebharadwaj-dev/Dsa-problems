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
