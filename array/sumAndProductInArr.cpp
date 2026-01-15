#include<iostream>
using namespace std;

void sumAndProduct(int arr[],int size){
    int sum = 0;
    long long product = 1;
    for(int i = 0; i < size; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout<<"Sum of all the elements of the array : "<<sum<<endl;
    cout<<"Product of all the elements of the array : "<<product<<endl;
}

int main(){
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter  "<<size<<"  elments:\n";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    sumAndProduct(arr,size);
    return 0;
}