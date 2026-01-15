#include<iostream>
using namespace std;

void smallestInArr(int arr[], int size){
    int smallest = INT8_MAX;
    int index = -1;
    for(int i = 0; i < size; i++){
           if(arr[i] < smallest){
            smallest = arr[i];
            index = i;
           }
    }
    cout<<"Smallest element in the Array is:  "<<smallest<<endl;
    cout<<"Index of smallest element is: "<<index<<endl;
}

int main(){
    int size;
    cout<<"Enter the Size of the Array : ";
    cin>>size;

    int arr[size];

    cout<<"Enter  "<<size<<"  elements:\n";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }

    smallestInArr(arr, size);

    return 0;
}