#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int>& arr, int tar, int st, int end) {
    if(st <= end){
        int mid = st + (end - st )/2;

        if(arr[mid] == tar){
            return mid;
        } else if(arr[mid] <= tar){
            return binSearch(arr, tar, mid+1, end);
        } else{
            return binSearch(arr, tar, st, mid-1);
        }
    }
    return -1;
}


int search(vector<int>& arr, int tar){
    return binSearch(arr, tar, 0, arr.size()-1);
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = search(arr, target);

    if(index == -1){
        cout << "Element not found in array.\n";
    } else{
        cout << "Element found at index: " << index << endl;
    }

    return 0;
}