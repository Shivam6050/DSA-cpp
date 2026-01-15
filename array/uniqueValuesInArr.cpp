#include<iostream>
using namespace std;

void uniqueValue(int arr[], int size){
    for(int i = 0; i < size; i++){
        int count = 0;

        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        if(count == 1){
            cout << arr[i] << " ";
        }
    }
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

    cout << "Unique elements are: ";
    uniqueValue(arr, size);

    return 0;
}
