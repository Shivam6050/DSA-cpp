#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n == 1){
        return 1;
    }

    return n + sumOfN(n-1);
}

int main(){
    int n;
    cout<<"Enter the no. upto which you want the sum : ";
    cin>>n;
    cout<<"The sum will be : "<<sumOfN(n);
    return 0;
}