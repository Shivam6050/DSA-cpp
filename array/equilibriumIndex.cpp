#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int equilibriumIdx(vector<int>& nums, int n){
            int totalSum = 0;
            for(int i = 0; i < n; i++){
                totalSum += nums[i];
            }
            int leftSum = 0, rightSum = totalSum;

            for(int i = 0; i < n; i++){
                rightSum -= nums[i];
                if(leftSum == rightSum){
                    return i;
                }
                leftSum += nums[i];
            }
            return -1;
        }
};

int main(){
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = sol.equilibriumIdx(nums, n);
    cout<<result<<endl;

    return 0;

}