#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &arr){
    next_permutation(arr.begin(),arr.end());
}

int main(){
    vector<int> arr = {2,4,1,7,5,0};
    nextPermutation(arr);
    for(int i = 0; i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}