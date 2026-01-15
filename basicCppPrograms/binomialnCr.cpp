#include<iostream>
using namespace std;

long long factorial(int n){
    long long fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

long long nCr(int n,int r){
    if(r > n || r < 0){
        cout << "Invalid! r cannot be greater than n.\n";
        return 0;
    }

    long long fact_n = factorial(n);
    long long fact_r = factorial(r);
    long long fact_nmr = factorial(n-r);

    return fact_n/(fact_r*fact_nmr);
}

int main(){
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<"The binomial coefficient is:"<<nCr(n,r);
    return 0;
}