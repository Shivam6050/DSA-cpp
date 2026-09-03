//Given an array of integers , rotating array of elements by k elements either left or right

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
          void reverseArray(vector<int>& nums, int start, int end){
            while(start < end){
                swap(nums[start],nums[end]);
                start++;
                end--;
            }
          }

          vector<int> rotateArray(vector<int>& nums, int k, string direction){
            int n = nums.size();
            if(n == 0 || k == 0) return nums;
            k = k % n;

            if(direction == "right"){
                reverseArray(nums,0,n-1);
                reverseArray(nums,0,k-1);
                reverseArray(nums,k,n-1);
            } else if(direction == "left"){
                reverseArray(nums,0,k-1);
                reverseArray(nums,k,n-1);
                reverseArray(nums,0,n-1);
            }
            return nums;
          }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter number of elements: ";
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k;
    cout << "Enter rotation count (k): ";
    cin >> k;

    string dir;
    cout << "Enter direction (left/right): ";
    cin >> dir;

    vector<int> result = sol.rotateArray(nums, k, dir);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}