#include<iostream>
using namespace std;

bool checkPowOfTwo(double n){
    if(n <= 0) return false;

    double epsilon = 0.000001;

    for(int i = 0; i < 100; i++){
        if(n > 1){
            n = n / 2.0;
        }
        else{
            break;
        }
    }

    for(int i = 0; i < 100; i++){
        if(n < 1){
            n = n * 2.0;
        }
        else{
            break;
        }
    }

    if(n > 1 - epsilon){
        if(n < 1 + epsilon){
            return true;
        }
    }
    return false;
}

int main(){
    double  n;
    cout<<"Enter the number you want to check:";
    cin>>n;
    if(checkPowOfTwo(n))
        cout << n << " is a power of 2";
    else
        cout << n << " is NOT a power of 2";

    return 0;
}