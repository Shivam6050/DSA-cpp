#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void reverseArray(vector<int> &arr){
    reverse(arr.begin(),arr.end());
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}