#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        
        vector<int> freq(26, 0);
        int left = 0;
        int maxFreq = 0;
        int maxLength = 0;

        for(int right = 0; right < s.size(); right++) {

            freq[s[right] - 'A']++;

            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            while((right - left + 1) - maxFreq > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};

int main() {
    Solution obj;

    string s = "AABABBA";
    int k = 1;

    int result = obj.characterReplacement(s, k);

    cout << "Longest length after replacement: " << result << endl;

    return 0;
}