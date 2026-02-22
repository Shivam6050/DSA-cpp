#include <iostream>
#include <vector>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    if(s.length() < p.length()) return result;

    vector<int> freqP(26, 0), freqS(26, 0);

    // Step 1: Build frequency of p
    for(char c : p) {
        freqP[c - 'a']++;
    }

    int windowSize = p.length();

    for(int i = 0; i < s.length(); i++) {
        // Add current char to window
        freqS[s[i] - 'a']++;

        // Remove char going out of window
        if(i >= windowSize) {
            freqS[s[i - windowSize] - 'a']--;
        }

        // Compare
        if(freqS == freqP) {
            result.push_back(i - windowSize + 1);
        }
    }

    return result;
}

int main() {
    string s, p;
    cout << "Enter string s: ";
    cin >> s;

    cout << "Enter string p: ";
    cin >> p;

    vector<int> ans = findAnagrams(s, p);

    cout << "Anagram starting indices: ";
    for(int idx : ans) {
        cout << idx << " ";
    }

    return 0;
}