#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int sumOfNaturalNum(int n){
            if(n == 1){
                return 1;
            }
            return n + sumOfNaturalNum(n-1);
        }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter the no. of terms until you want natural number sum : ";
    cin>>n;
    cout<<sol.sumOfNaturalNum(n)<<endl;
    return 0;
}