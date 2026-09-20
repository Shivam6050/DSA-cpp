#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
         string decimalToOctal(int decimal){
            if(decimal == 0){
                return "0";
            }
            string octal = "";
            int n = decimal;
            while(n > 0){
                int rem = n % 8;
                octal = to_string(rem) + octal;
                n = n/8;
            }
            return octal;
         }
};

int main(){
    Solution sol;
    int decimal = 17;
    string result = sol.decimalToOctal(decimal);
    cout<<"Decimal: "<<decimal<<" , Octal: "<<result<<endl;
    return 0;
}