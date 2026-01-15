#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &prices){
    int n =prices.size();
    int res = 0;
    int lMin = prices[0];
    int lMax = prices[0];
    int i = 0;

    while(i<n-1){
        while(i<n-1 && prices[i]>=prices[i+1]){
            i++;
        }
        lMin = prices[i];

        while(i<n-1 && prices[i]<=prices[i+1]){
            i++;
        }
        lMax = prices[i];
        res = res+(lMax-lMin);
    }
    return res;
}

int main(){
    vector<int> prices = {100,180,260,310,40,535,695};
    cout<<"Maximum Profit will be:"<<maxProfit(prices);
    return 0;
}