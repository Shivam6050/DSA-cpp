#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int octalToDecimal(int octal) {
        int decimal = 0;
        int base = 1;

        while (octal != 0) {
            int rem = octal % 10;

            decimal += rem * base;

            base *= 8;
            octal /= 10;
        }

        return decimal;
    }

    string decimalToBinary(int decimal) {
        if (decimal == 0)
            return "0";

        string binary = "";

        while (decimal != 0) {
            int rem = decimal % 2;

            binary += char('0' + rem);

            decimal /= 2;
        }

        reverse(binary.begin(), binary.end());

        return binary;
    }
};

int main() {
    Solution sol;
    int octal = 345;
    int decimal = sol.octalToDecimal(octal);

    cout << sol.decimalToBinary(decimal) << endl;

    return 0;
}