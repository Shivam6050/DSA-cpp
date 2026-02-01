#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> ans;
    unordered_set<int> s;

    int n = grid.size();
    int repeated = -1, missing = -1;

    long long actualSum = 0;
    long long expectedSum = (long long)n * n * (n * n + 1) / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            actualSum += grid[i][j];

            if (s.find(grid[i][j]) != s.end()) {
                repeated = grid[i][j];
            }
            s.insert(grid[i][j]);
        }
    }

    // If input is invalid (no duplicate found)
    if (repeated == -1) {
        cout << "Invalid input: No repeated value found\n";
        return {};
    }

    missing = expectedSum + repeated - actualSum;

    ans.push_back(repeated);
    ans.push_back(missing);
    return ans;
}

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    cout << "Enter grid elements:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    vector<int> result = findMissingAndRepeatedValues(grid);

    if (!result.empty()) {
        cout << "Repeated value: " << result[0] << endl;
        cout << "Missing value: " << result[1] << endl;
    }

    return 0;
}
