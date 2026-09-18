#include<bits/stdc++.h>
using namespace std;

void roots(int a, int b, int c){
    int d = b * b - 4*a*c;
    double sqrt_val = sqrt(abs(d));
    if(d > 0){
        cout<<"Roots are real and different \n";
        double root1 = (-b + sqrt_val)/(2*a);
        double root2 = (-b - sqrt_val)/(2*a);
        cout<<root1<<"\n"<<root2;
    } else if(d == 0){
        cout<<"Roots are real and same \n";
        double root1 = -(double) b/(2*a);
        cout<<root1<<"\n"<<root1;
    } else{
        cout<<"Roots are complex";
        cout<<-(double)b/(2*a) <<" +i "<<sqrt_val<<"\n";
        cout<<-(double)b/(2*a) <<" -i "<<sqrt_val<<"\n";
    }
}

int main(){
    int a = 1, b = -3, c = -10;
    roots(a,b,c);
    return 0;
}