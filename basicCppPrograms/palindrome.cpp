#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        int original = x;
        long long rev = 0;
        while(x != 0){
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }
        return rev == original;
    }
};

int main(){
    Solution obj;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    if(obj.isPalindrome(x))
        cout << x << " is a palindrome";
    else
        cout << x << " is not a palindrome";

    return 0;
}
