#include<iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar,int n){
    int st = 0, end = arr.size()-1;

    while(st <= end){
        int mid = st + (end - st) /2;
        if(tar > arr[mid]){
            st = mid + 1;
        } else if(tar < arr[mid]){
            end = mid - 1;
        } else{
            return mid;
        }
    }
    return -1;
}

int main(){
    int n, tar;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the  "<<n<<"  elements:\n";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the element you want to search in the array : ";
    cin>>tar;

    cout<< tar <<"  is at index " <<binarySearch(arr,tar,n)<< "  in array";

}