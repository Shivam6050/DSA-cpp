#include<iostream>
using namespace std;

void reverse(int n){
    int rev = 0;
    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    cout<<"Reversed Number =  "<<rev;
}

int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    reverse(n);
    return 0;
}