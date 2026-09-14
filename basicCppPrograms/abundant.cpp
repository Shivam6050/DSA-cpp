#include <bits/stdc++.h>
using namespace std;

void abundant(int n) {

    int sum = 0;
    int originalno = n;

    for (int i = 1; i <= sqrt(n); i++) {

        if (n % i == 0) {

            if (n / i == i) {
                sum += i;
            }
            else {
                sum += i;
                sum += n / i;
            }
        }
    }

    // Remove the number itself because
    // we need the sum of proper divisors
    sum -= originalno;

    if (sum > originalno) {
        cout << "It is an abundant number";
    }
    else {
        cout << "It is not an abundant number";
    }
}

int main() {

    int num;

    cout << "Enter the number to check: ";
    cin >> num;

    abundant(num);

    return 0;
}