#include<iostream>
#include<vector>

using namespace std;

void rotateArr(vector<int> &arr , int d){

    int n = arr.size();
    for (int i = 0; i < d; i++)
    {
        int first = arr[0];
        for (int j = 0; j < n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = first;
    }
    
}

int main() {
    vector<int> arr = { 1, 2, 3, 4, 5, 6 };
    int d;
    cout<<"Enter d:-"<<endl;
    cin>>d;
    rotateArr(arr, d);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}