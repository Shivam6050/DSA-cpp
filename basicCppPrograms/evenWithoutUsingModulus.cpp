#include <iostream>
using namespace std;

bool isEven(int n){
    return (n & 1) == 0;
}

int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    if(isEven(n)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}