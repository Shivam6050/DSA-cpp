#include<iostream>
using namespace std;

void reverseAnArr(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"The Reversed Array is: ";
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    reverseAnArr(arr, size);

    return 0;
}