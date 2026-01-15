#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

vector <int> findMajority(vector<int> &arr){
    int n = arr.size();
    unordered_map<int,int> freq;
    vector<int> res;
    for(int ele : arr){
        freq[ele]++;
    }
    for(auto it : freq){
        int ele = it.first;
        int cnt = it.second;
        if(cnt >n/3){
            res.push_back(ele);
        }
    }
    if(res.size() == 2 && res[0] > res[1]){
        swap(res[0],res[1]);
        return res;
    }
}

int main(){
    vector<int> arr = {2,2,3,1,3,2,1,1};
    vector<int> res = findMajority(arr);
    for(auto ele:res){
        cout<<ele<<" ";
    }
    return 0;
}