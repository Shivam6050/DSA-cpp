#include<iostream>
using namespace std;

bool isAutomorphic(int N){
    int sq = N*N;
    while(N > 0){
        if(N % 10 != sq % 10){
            return false;
        }
        N /= 10;
        sq /= 10;
    }
    return true;
}

int main(){
    int N = 25;
    if(isAutomorphic(N)){
        cout<<"Automorphic number"<<endl;
    } else{
        cout<<"Not an Automorphic number"<<endl;
    }
    return 0;
}