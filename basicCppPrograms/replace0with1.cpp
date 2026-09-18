#include<bits/stdc++.h>
using namespace std;

int replaceZeroWithOne(int n){
    int result = 0;
    int place = 1;
    while(n > 0){
        int digit = n % 10;
        if(digit == 0){
            digit = 1;
        }
        result = result + digit * place;
        place = place * 10;
        n = n/10;
    }
    return result;
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"After replacing zeros with ones : "<<replaceZeroWithOne(n);
    return 0;
}