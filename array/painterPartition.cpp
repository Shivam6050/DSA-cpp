#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){
    int painters = 1, time = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedTime) return false;

        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        } else{
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
    int sum = 0, maxVal = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxVal = max(maxVal , arr[i]);
    }

    int st = maxVal , end = sum , ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        } else{
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> boards = {10, 20, 30, 40};
    int n = boards.size();
    int m = 2; // painters

    cout << "Minimum time to paint: "
         << minTimeToPaint(boards, n, m) << endl;

    return 0;
}
