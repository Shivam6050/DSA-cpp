#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, zeros = 0, maxLen = 0;

        for(int right = 0; right < nums.size(); right++) {
            if(nums[right] == 0) zeros++;

            while(zeros > k) {
                if(nums[left] == 0) zeros--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

int main() {
    int n, k;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (0 or 1): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    Solution obj;
    int result = obj.longestOnes(nums, k);

    cout << "Maximum consecutive 1s (with at most k flips): " << result << endl;

    return 0;
}