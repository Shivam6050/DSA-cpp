#include<iostream>
#include<vector>
using namespace std;

void isPrime(int n){
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i = 2;i*i <= n;i++){
        if(prime[i]){
            for(int j = i*i;j <= n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=0;i<=n;i++){
        if(prime[i]){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a Number(until you want prime no. to be printed)";
    cin>>n;
    isPrime(n);
    return 0;
}