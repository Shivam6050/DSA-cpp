//Time complexity:- O(n*log(n)) as two things are happening here sorting and traversing so O(n*log(n)+n) = O(n*log(n))


#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getSecondLargest(vector<int> &arr){
    int n = arr.size();

    sort(arr.begin(),arr.end());

    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i] != arr[n-1]){
            return arr[i];
        }
    }
    return -1;
}

int main(){
     vector<int> arr = { 12, 35, 1, 10, 34, 1 };
    cout<<getSecondLargest(arr);
    return 0;
}