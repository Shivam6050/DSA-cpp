#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty()) return "";

    string prefix = strs[0];

    for(int i = 1; i < strs.size(); i++) {
        while(strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if(prefix.empty()) return "";
        }
    }

    return prefix;
}

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter strings:\n";
    for(int i = 0; i < n; i++){
        cin >> strs[i];
    }

    string ans = longestCommonPrefix(strs);

    if(ans == "")
        cout << "No common prefix";
    else
        cout << "Longest Common Prefix: " << ans;

    return 0;
}
