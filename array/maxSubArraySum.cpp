// Given an integer array nums, find the subarray with the largest sum, and return its sum.
//Kadane's Algorithm


#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums){
    int currSum = 0, maxSum = INT16_MIN;

    for(int val : nums){
        currSum += val;
        maxSum = max(currSum,maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>> n;

    vector<int> nums(n);
    cout<<"Enter  "<<n<<"  elements:\n";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }

    cout<<"Maximum Subarray Sum = "<<maxSubArray(nums);
    return 0;
}
