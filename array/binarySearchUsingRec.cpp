#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int recBinarySearch(vector<int> &arr, int tar,int st, int end){
    if(st <= end){
        int mid = st + (end - st)/2;

        if(tar < arr[mid]){
            return recBinarySearch(arr,tar,st,mid-1);
        } else if(tar > arr[mid]){
            return recBinarySearch(arr,tar,mid+1,end);
        } else{
            return mid;
        }
        return -1;
    }
}

int main(){
    int n, tar;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());   // 🔥 Sort the array

    cout << "Sorted Array: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    cout << "Enter element to search: ";
    cin >> tar;

    int index = recBinarySearch(arr, tar, 0, n - 1);

    if(index == -1){
        cout << tar << " not found in array";
    } 
    else {
        cout << tar << " found at index " << index;
    }

    return 0;
}