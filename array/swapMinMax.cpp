#include <iostream>
#include <climits>
using namespace std;

void swapMinMax(int arr[], int size) {
    int smallest = INT_MAX, largest = INT_MIN;
    int minIndex = -1, maxIndex = -1;

    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            minIndex = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            maxIndex = i;
        }
    }

    // Swap using built-in swap function
    if(minIndex != -1 && maxIndex != -1){
        swap(arr[minIndex], arr[maxIndex]);
    }

    // Print the array after swap
    cout << "Array after swapping smallest and largest: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    swapMinMax(arr, size);

    return 0;
}
