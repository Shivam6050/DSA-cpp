#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int linearSearch(vector<int>& arr, int target){
            int n = arr.size();
            for(int i = 0; i < n; i++){
                if(arr[i] == target){
                    return i;
                }
            }
            return -1;
        }
};

int main(){
    Solution sol;
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter elements of arr1: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the element you want to search in the array: ";
    cin>>target;

    int index = sol.linearSearch(arr,target);
    int position  = index + 1;
    cout<<"The element found at index "<<index<<" and position "<<position<<endl;
    return 0;
}