#include<iostream>
#include<vector>
using namespace std;

void getPerms(vector<int>& nums, int idx, vector<vector<int>>& ans){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = idx; i < nums.size(); i++){
        swap(nums[idx], nums[i]);
        getPerms(nums, idx+1, ans);

        swap(nums[idx], nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    getPerms(nums, 0, ans);
    return ans;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    vector<vector<int>> result = permute(nums);

    cout << "All permutations are:\n";
    for(const auto& perm : result){
        cout << "{ ";
        for(int x : perm){
            cout << x << " ";
        }
        cout << "}\n";
    }

    return 0;
}