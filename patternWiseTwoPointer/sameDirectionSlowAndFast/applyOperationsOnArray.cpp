#include<iostream>
#include<vector>
using namespace std;

vector<int> applyOperations(vector<int>& nums) {
    int n = nums.size();

    for(int i = 0; i < n-1; i++){
        if(nums[i] == nums[i+1]){
            nums[i] *= 2;
            nums[i+1] = 0;
        }
    }

    int idx = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[idx]);
            idx++;
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {1,2,2,1,1,0};

    vector<int> result = applyOperations(nums);
    cout<<"The array will be:  ";
    for(int num : result){
        cout<<num<<" ";
    }
    return 0;

}