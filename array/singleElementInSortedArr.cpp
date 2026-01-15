#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int st = 0, end = n-1;
        if (n == 1) return nums[0];
        while(st <= end){
            int mid = st + (end - st)/2;
            if(mid == 0 && nums[0] != nums[1]) return nums[mid];
            if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];
            if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];
            
            
            if(mid % 2 == 0){
                if(nums[mid-1] == nums[mid]){
                    end = mid - 1;
                } else{
                    st = mid + 1;
                }
            } else{
                if(nums[mid-1] == nums[mid]){
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

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (sorted, pairs + one unique):\n";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int result = obj.singleNonDuplicate(nums);

    cout << "Single non-duplicate element is: " << result << endl;

    return 0;
}
