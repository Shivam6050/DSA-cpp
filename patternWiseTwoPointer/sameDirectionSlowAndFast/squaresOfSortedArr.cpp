#include<iostream>
#include<vector>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n);

    int left = 0;
    int right = n-1;
    int idx = n-1;

    while(left <= right){
        if(abs(nums[left]) > abs(nums[right])) {
            result[idx] = nums[left] * nums[left];
            left++;
        } else{
            result[idx] = nums[right] * nums[right];
            right--;
        }
        idx--;
    }

    return result;
}

int main(){
    vector<int> nums ={-4,-1,0,3,10};
    vector<int> result = sortedSquares(nums);
    cout<<"The array will be:  ";
    for(int num : result) {
        cout << num << " ";
    }
    return 0;
}