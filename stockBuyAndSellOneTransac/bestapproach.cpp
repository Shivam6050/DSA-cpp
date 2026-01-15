#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices){
    int n = prices.size();
    int minSoFar = prices[0],res = 0;
    for(int i = 1;i<n;i++){
        minSoFar = min(minSoFar,prices[i]);
        res = max(res,prices[i]-minSoFar);
    }
    return res;
}

int main(){
    vector<int> prices = {7,10,1,3,6,9,2};
    cout<<"Maximum profit will be:"<<maxProfit(prices);
    return 0;
}