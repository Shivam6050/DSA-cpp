#include<bits/stdc++.h>
using namespace std;

#define isLeapYear(y)((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;
    if(isLeapYear(year)){
        cout<<"Yes, This is a Leap year";
    } else{
        cout<<"No, This is not a Leap year";
    }
}