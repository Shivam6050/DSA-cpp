#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return abs(a * b)/gcd(a,b);
}

int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    int ans = lcm(a,b);
    cout<<"The LCM of "<<a<<" and "<<b<<" are: "<<ans;
    return 0;
}