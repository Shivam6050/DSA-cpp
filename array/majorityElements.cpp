// Given an array nums of size n, return the majority element.
// Moore's voting algorithm

#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums){
    int n = nums.size();
    int freq = 0, ans = 0;

    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}

// We can also solve through this method
/*int majorityElement(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int freq = 1,ans = nums[0];
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }else{
                freq = 1;
                ans = nums[i];
            }
            if(freq > n/2){
                return ans;
            }
        }
        return ans;
    }*/

int main(){
    int n;
    cout<<"Enter the Size of the Array : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"Enter the  "<<n<<"  elements:\n";
    for(int i = 0; i < n; i++){
        cin>>nums[i];
    }
    cout<<"The majority element is : "<<majorityElement(nums);
}