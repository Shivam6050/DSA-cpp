#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
       void factors(int n){
        vector<int> ans;
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                ans.push_back(i);
                if(i != n/i){
                    ans.push_back(n/i);
                }
            }
        }
        for(int f : ans){
            cout<<f<<" ";
        }
        cout<<endl;
       }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter the number whose factor you want to find:- ";
    cin>>n;
    sol.factors(n);
    return 0;
}