#include<iostream>
#include<vector>
using namespace std;

void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets){
    if(i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }

    //include
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i+1, allSubsets);
    ans.pop_back();

    //exclude
    getAllSubsets(nums, ans, i+1, allSubsets);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, 0, allSubsets);
    return allSubsets;
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

    vector<vector<int>> result = subsets(nums);

    cout << "All subsets are:\n";
    for(const auto& subset : result){
        cout << "{ ";
        for(int x : subset){
            cout << x << " ";
        }
        cout << "}\n";
    }

    return 0;
}