#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2){
            vector<int> freq(1001,0);
            for(int x: arr1){
                freq[x]++;
            }

            vector<int> ans;

            for(int x: arr2){
                while(freq[x] > 0){
                    ans.push_back(x);
                    freq[x]--;
                }
            }

            for(int x = 0; x <= 1000; x++){
                while(freq[x] > 0){
                    ans.push_back(x);
                    freq[x]--;
                }
            }

            return ans;
        }
};

int main(){
    Solution sol;
    int n,m;
    cout<<"Enter Size of arr1: ";
    cin>>n;
    vector<int> arr1(n);
    cout<<"Enter elements of arr1: ";
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    cout<<"Enter Size of arr2: ";
    cin>>m;
    vector<int> arr2(m);
    cout<<"Enter elements of arr2(element should be distinct): ";
    for(int i = 0; i < m; i++){
        cin>>arr2[i];
    }

    vector<int> ans = sol.relativeSortArray(arr1,arr2);
    cout<<"Relative Sorted array: ";
    for(int x : ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}