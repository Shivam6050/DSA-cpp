#include<bits/stdc++.h>
using namespace std;

void addFraction(int n1, int d1, int n2, int d2){
    int numerator = (n1*d2)+(n2*d1);
    int denominator = d1 * d2;
    int gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;
    cout<<"Sum = "<<numerator<<"/"<<denominator<<endl;
}

int main(){
    int n1,n2,d1,d2;
    cout<<"Enter the numerator of first : ";
    cin>>n1;
    cout<<"Enter the denominator of first :";
    cin>>d1;
    cout<<"Enter the numerator of second :";
    cin>>n2;
    cout<<"Enter the denominator of second : ";
    cin>>d2;
    addFraction(n1,d1,n2,d2);
    return 0;
}