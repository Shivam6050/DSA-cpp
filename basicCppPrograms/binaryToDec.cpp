#include<iostream>
using namespace std;

int binToDec(int binNum){
    int ans = 0, pow = 1;

    while(binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans;  //decimal form
}

int main(){
    int binNum;
    cout<<"Enter the binary number:";
    cin>>binNum;
    cout<<"The decimal equivalent of the binary number(  "<<binNum<<"  ) is:"<<binToDec(binNum);
    return 0;
}