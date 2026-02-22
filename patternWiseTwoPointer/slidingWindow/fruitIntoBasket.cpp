#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int totalFruit(vector<int>& fruits) {
    unordered_map<int, int> freq;
    int left = 0, maxLen = 0;

    for(int right = 0; right < fruits.size(); right++){
        freq[fruits[right]]++;

        while(freq.size() > 2) {
            freq[fruits[left]]--;
            if(freq[fruits[left]] == 0){
                freq.erase(fruits[left]);
            }
            left++;
        }
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    int n;
    cout << "Enter number of fruits: ";
    cin >> n;

    vector<int> fruits(n);
    cout << "Enter fruit types: ";
    for(int i = 0; i < n; i++) {
        cin >> fruits[i];
    }

    int result = totalFruit(fruits);
    cout << "Maximum fruits collected: " << result << endl;

    return 0;
}