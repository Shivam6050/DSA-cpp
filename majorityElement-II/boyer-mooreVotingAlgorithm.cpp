#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findMajority(vector<int> &arr) {
    int n = arr.size();

    int ele1 = 0, ele2 = 0, cnt1 = 0, cnt2 = 0;

    // Step 1: Find potential candidates
    for (int ele : arr) {
        if (ele1 == ele) {
            cnt1++;
        } else if (ele2 == ele) {
            cnt2++;
        } else if (cnt1 == 0) {
            ele1 = ele;
            cnt1 = 1;
        } else if (cnt2 == 0) {
            ele2 = ele;
            cnt2 = 1;
        } else {
            cnt1--;
            cnt2--;
        }
    }

    // Step 2: Verify the candidates
    cnt1 = 0;
    cnt2 = 0;

    for (int ele : arr) {
        if (ele == ele1) cnt1++;
        else if (ele == ele2) cnt2++;
    }

    vector<int> res;

    if (cnt1 > n / 3) res.push_back(ele1);
    if (cnt2 > n / 3) res.push_back(ele2);

    // Step 3: Sort result if two elements exist
    sort(res.begin(), res.end());

    return res;
}

int main() {
    vector<int> arr = {2,2,3,1,3,2,1,1};

    vector<int> res = findMajority(arr);

    for (int ele : res) {
        cout << ele << " ";
    }

    return 0;
}
