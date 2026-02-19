#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();

    int idx = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            nums[idx] = nums[i];
            idx++;
        }
    }

    while(idx < n){
        nums[idx] = 0;
        idx++;
    }
}

int main(){
    vector<int> nums = {0,1,0,3,12};

    moveZeroes(nums);
    cout<<"The array after shifting zeroes to the last will be:  ";
    for(int i : nums){
        cout<<i<<" ";
    }

    return 0;
}