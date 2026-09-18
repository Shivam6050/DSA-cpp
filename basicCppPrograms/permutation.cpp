#include<bits/stdc++.h>
using namespace std;

int permutation(int n, int r){
    int ans = 1;
    for(int i = n; i >= n-r+1; i--){
        ans *= i;
    }
    return ans;
}

int main(){
    int n = 6, r = 4;
    int result = permutation(n,r);
    cout<<result<<endl;
    return 0;
}