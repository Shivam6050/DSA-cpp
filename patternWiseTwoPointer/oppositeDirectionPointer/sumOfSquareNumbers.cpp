#include <iostream>
using namespace std;

bool judgeSquareSum(int c) {
    long long left = 0;
    long long right = 1;
    
    // find floor(sqrt(c)) without using math library
    while (right * right <= c) {
        right++;
    }
    right--;  // now right = floor(sqrt(c))

    while (left <= right) {
        long long sum = left * left + right * right;

        if (sum == c) {
            return true;
        } else if (sum < c) {
            left++;
        } else {
            right--;
        }
    }
    return false;
}

int main() {
    int c;
    cout << "Enter a number: ";
    cin >> c;

    if (judgeSquareSum(c)) {
        cout << "Yes, it can be written as sum of two squares.\n";
    } else {
        cout << "No, it cannot be written as sum of two squares.\n";
    }

    return 0;
}
