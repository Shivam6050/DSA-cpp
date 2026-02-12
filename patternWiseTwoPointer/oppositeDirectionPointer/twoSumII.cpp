#include<bits/stdc++.h>
using namespace std;


vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0, right = numbers.size()-1;
    while(left < right){
        int currSum = numbers[left] + numbers[right];

        if(currSum == target){
            return {left+1, right+1};
        }else if(currSum > target){
            right--;
        }else{
            left++;
        }
    }
    return{};
        
}

int main() {

    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = twoSum(numbers, target);

    cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    return 0;
}
