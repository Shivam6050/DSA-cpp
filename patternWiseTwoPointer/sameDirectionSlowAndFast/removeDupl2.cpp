#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
        
    if(n <= 2) return n;

    int idx = 2;

    for(int i = 2; i < n; i++){
        if(nums[i] != nums[idx-2]){
            nums[idx] = nums[i];
            idx++;
        }
    }
    return idx;
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};

    cout<<"The size of array with ar most twice unique element is:  "<<removeDuplicates(nums);
    return 0;
}