#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    int n;
    cout<<"Enter the number whose factorial you want : ";
    cin>>n;
    cout<<"The factorial of  "<<n<<"  is :  "<<factorial(n);
    return 0;
}