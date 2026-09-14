#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int addDigits(int num){
            if(num == 0){
                return 0;
            }
            return 1 + (num - 1) % 9;
        }
};

int main(){
    Solution sol;
    int num = 472;
    cout<<sol.addDigits(num)<<"\n";
    num = 102;
    cout<<sol.addDigits(num)<<"\n";
    return 0;
}