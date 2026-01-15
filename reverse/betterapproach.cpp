#include<iostream>
#include<vector>

using namespace std;

void reverseArray(vector<int> &arr){

    int n = arr.size();

    int left = 0,right =(n-1);

    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}