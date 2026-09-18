#include<bits/stdc++.h>
using namespace std;

int calculateSum(int l, int r){
    return (r*(r+1))/2-((l-1)*l)/2;
}

int main(){
    int l = 7, r = 15;
    int ans = calculateSum(l,r);
    cout<<"The Sum of the numbers in the given range is "<<ans<<endl;
    return 0;
}