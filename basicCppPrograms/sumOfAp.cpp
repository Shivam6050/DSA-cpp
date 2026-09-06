#include<bits/stdc++.h>
using namespace std;

float sumOfAp(float a, float d, int n){
    float sum = (n/2.0)*(2.0*a+(n-1)*d);
    return sum;
}

int main(){
    int n;
    float a,d;
    cout<<"Enter first term of A.P: ";
    cin>>a;
    cout<<"Enter common difference: ";
    cin>>d;
    cout<<"Enter number of terms in A.P: ";
    cin>>n;
    cout<<"Sum of given A.P series: "<<sumOfAp(a,d,n)<<endl;
    return 0;
}