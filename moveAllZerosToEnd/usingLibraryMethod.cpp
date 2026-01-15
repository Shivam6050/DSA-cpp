#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;


void pushZerosToEnd(vector<int> &arr){
    stable_partition(arr.begin(),arr.end(), [](int n) {
        return n != 0;
    });
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    for (int i : arr)
        cout << i << ' ';
    return 0;
}
