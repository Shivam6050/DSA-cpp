#include<bits/stdc++.h>
using namespace std;

void findMaxMinDigit(int n){
    int maxDigit = 0;
    int minDigit = 9;
    while(n > 0){
        int digit = n % 10;
        if(digit > maxDigit) maxDigit = digit;
        if(digit < minDigit) minDigit = digit;
        n = n / 10;
    }
    cout<<"Max digit : "<<maxDigit<<endl;
    cout<<"Min digit : "<<minDigit<<endl;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    findMaxMinDigit(n);
    return 0;
}