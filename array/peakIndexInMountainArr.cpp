#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size()-2;
        
        while(st <= end){
            int mid = st + (end - st)/2;

            if(A[mid-1] < A[mid] && A[mid] > A[mid+1]){
                return mid;
            } else if(A[mid-1] < A[mid]){
                st = mid + 1;
            } else{
                end = mid - 1;
            }
        }
         return -1;
    }
};

int main(){
    Solution obj;

    int n;
    cout << "Enter size of mountain array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter " << n << " elements (mountain array):\n"; // Mountain array:-{0,2,5,7,6,4,1} Output :- 7
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int peakIndex = obj.peakIndexInMountainArray(A);

    if(peakIndex == -1)
        cout << "No peak found";
    else
        cout << "Peak index is: " << peakIndex;

    return 0;
}
