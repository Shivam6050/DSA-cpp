#include<iostream>
#include<vector>
using namespace std;

//move all the even integers at the beginning of the array followed by the odd integers
vector<int> sortArrayByParity(vector<int>& nums) {
    int n = nums.size();

    int idx = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] % 2 == 0){
            swap(nums[i], nums[idx]);
            idx++;
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {3,1,2,4};

    vector<int> result = sortArrayByParity(nums);
    cout<<"The array will be:  ";
    for(int num : result){
        cout<<num<<" ";
    }
    return 0;
}