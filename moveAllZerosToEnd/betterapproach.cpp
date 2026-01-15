//as we are traversing twice so the time complexity will be:- O(2*n)=O(n)

#include<iostream>
#include<vector>
using namespace std;

void pushZerosToEnd(vector<int> &arr){

    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != 0){
            arr[count++] = arr[i];
        }
    }
    while(count < arr.size()){
        arr[count++] = 0;
    }
}

int main() {
    vector<int> arr = {1, 2, 0, 4, 3, 0, 5, 0};
    pushZerosToEnd(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}