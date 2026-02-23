#include <iostream>
#include <vector>
#include <climits>
using namespace std;

string minWindow(string s, string t) {
    vector<int> freq(128, 0);

    // Step 1: Store frequency of t
    for(char c : t) {
        freq[c]++;
    }

    int left = 0, right = 0;
    int count = t.length();

    int minLen = INT_MAX;
    int start = 0;

    while(right < s.length()) {
        // Include current char
        if(freq[s[right]] > 0) {
            count--;
        }
        freq[s[right]]--;
        right++;

        // When valid window found
        while(count == 0) {
            if(right - left < minLen) {
                minLen = right - left;
                start = left;
            }

            // Remove from left
            freq[s[left]]++;
            if(freq[s[left]] > 0) {
                count++;
            }
            left++;
        }
    }

    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}

int main() {
    string s, t;

    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string t: ";
    cin >> t;

    string result = minWindow(s, t);

    cout << "Minimum window substring: " << result << endl;

    return 0;
}