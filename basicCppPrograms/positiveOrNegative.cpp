#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
       void check(int n){
        if(n >> 31 == 0){
            cout<<n<<"  is positive."<<endl;
        } else{
            cout<<n<<"  is negative."<<endl;
        }
       }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    sol.check(n);
    return 0;
}