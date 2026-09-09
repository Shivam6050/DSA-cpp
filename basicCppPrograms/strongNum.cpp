#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}

int strongNum(int num){
    int original = num;
    int sum = 0;
    while(num > 0){
        int digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }
    if(sum == original && original != 0){
        cout<<"Yes it is a Strong number";
    } else{
        cout<<"No it is not a Strong number";
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    strongNum(n);
    return 0;
}