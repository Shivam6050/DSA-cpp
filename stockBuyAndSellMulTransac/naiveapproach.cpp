#include<iostream>
#include<vector>
using namespace std;

int maxProfitRec(vector<int> &price , int start, int end){
    int res = 0;
    for(int i=start;i<end;i++){
        for(int j=i+1;j<=end;j++){
            if(price[j]>price[i]){
                int curr = (price[j]-price[i]+maxProfitRec(price,start,i-1)+maxProfitRec(price,j+1,end));
                res = max(res,curr);
            }
        }
    }
    return res;
}
int maxProfit(vector<int> &prices){
    return maxProfitRec(prices,0,prices.size()-1);
}
int main(){
    vector<int> prices = {100,180,260,310,40,535,695};
    cout<<maxProfit(prices);
    return 0;
}