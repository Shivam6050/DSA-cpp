#include<bits/stdc++.h>
using namespace std;

void checkHarshad(int num){
    int original = num;
    int sum = 0;
    while(num > 0){
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    if(original % sum == 0){
        cout<<original<<" is a Harshad Number";//18 is a Harshad number
    } else{
        cout<<original<<" is not a Harshad Number";
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    checkHarshad(n);
    return 0;
}