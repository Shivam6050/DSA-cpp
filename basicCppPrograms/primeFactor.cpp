#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
         vector<int> getPrimeFactor(int n){
            vector<int> primeFactors;
            if(n % 2 == 0){
                primeFactors.push_back(2);
                while(n % 2 == 0){
                    n /= 2;
                }
            }
            for(int i = 3; i*i <= n; i+=2){
                if(n % i == 0){
                    primeFactors.push_back(i);
                    while(n % i == 0){
                        n /= i;
                    }
                }
            }

            if(n > 1){
                primeFactors.push_back(n);
            }
            return primeFactors;
         }
};

int main(){
    int n = 120;
    Solution sol;
    vector<int> ans = sol.getPrimeFactor(n);
    cout<<"Prime factor of "<<n<<" : ";
    for(int factor : ans){
        cout<<factor<<" ";
    }
    cout<<endl;
    return 0;
}