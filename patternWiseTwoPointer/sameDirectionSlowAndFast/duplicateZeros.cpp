#include<iostream>
#include<vector>
using namespace std;

//duplicate the occurrence of zero, shifting the remaining element to the right
void duplicateZeros(vector<int>& arr) {
    int n = arr.size();
    int zeros = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeros++;
        }
    }

    int idx = n + zeros - 1;

    for(int i = n-1; i >= 0; i--){
        if(idx < n){
            arr[idx] = arr[i];
        }

        if(arr[i] == 0){
            idx--;
            if(idx < n){
                arr[idx] = 0;
            }
        }
            idx--;
    }
}

int main(){
    vector<int> arr = {1,0,2,3,0,4,5,0};
    duplicateZeros(arr);
    
    cout<<"The array will be:  "<<endl;
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}