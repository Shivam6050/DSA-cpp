#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 2){
        return true;
    }
    else if(n > 2 && n %2 == 0){
        return false;
    }
    for(int i = 3;i*i <= n;i+=2){
        if(n%i==0){
            return false;
        }
        return true;
    }
}

int main(){
    int n;
    cout<<"Enter a Number:-";
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    return 0;
}