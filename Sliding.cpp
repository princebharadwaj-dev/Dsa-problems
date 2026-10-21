// Longest Substring with different character

#include <iostream>
#include <vector>
using namespace std;

int main () {
    string s = "abcdecbeadf";
    int n = s.size();

    vector<bool>count(256,0);
    int first = 0; int sec = 0; int len = 0;

    while(sec < n) {
        while(count[s[sec]]) {
            count[s[first]] = 0;
            first++;
        }

        count[s[sec]] = 1;

        len = max(len, sec - first + 1);

        sec++;
    }
}

