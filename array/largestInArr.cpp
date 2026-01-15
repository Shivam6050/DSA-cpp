#include<iostream>
using namespace std;

void largestInArr(int arr[],int size){
    int largest = INT8_MIN;
    int index = -1;
    for(int i = 0; i < size; i++){
        if(arr[i]>largest){
            largest = arr[i];
            index = i;
        }
    }
    cout<<"Largest element in the array : "<<largest<<endl;
    cout<<"Largest element found at index : "<<index<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[size];
    cout<<"Enter  "<<size<<"  elements:\n";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    largestInArr(arr,size);

    return 0;
}