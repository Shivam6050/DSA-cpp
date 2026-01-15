#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1 ;

        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                return mid;
            } 

            if(nums[st] <= nums[mid]){
                if(nums[st] <= target && target <= nums[mid]){
                    end = mid - 1;
                } else{
                    st = mid + 1;
                }
            } else{
                if(nums[mid] <= target && target <= nums[end]){
                    st = mid + 1;
                } else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution obj;

    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (rotated sorted array):\n";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    int index = obj.search(nums, target);

    if(index == -1)
        cout << "Target not found";
    else
        cout << "Target found at index: " << index;

    return 0;
}
