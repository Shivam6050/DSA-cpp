#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter the no. whose factorial you want:-";
    cin>>n;
    cout<<"factorial of  "<< n <<"  is  "<<factorial(n);
    return 0;
}