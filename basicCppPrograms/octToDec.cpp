#include<bits/stdc++.h>
using namespace std;

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

int main(){
    int octal;
    cout<<"Enter the octal number: ";
    cin>>octal;
    int result = octalToDecimal(octal);
    cout<<"The decimal form will be: "<<result<<endl;
    return 0;
}