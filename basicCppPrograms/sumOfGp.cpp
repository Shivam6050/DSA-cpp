#include<bits/stdc++.h>
using namespace std;

double sumOfGp(double a, double r, int n){
    if(r == 1){
        return a*n;
    }
    return a * (pow(r,n) - 1)/(r - 1);
}

int main(){
    double a,r;
    int n;
    cout<<"Enter first term of G.P: ";
    cin>>a;
    cout<<"Enter common ratio: ";
    cin>>r;
    cout<<"Enter number of terms in G.P: ";
    cin>>n;
    cout<<"Sum of given A.P series: "<<sumOfGp(a,r,n)<<endl;
    return 0;
}