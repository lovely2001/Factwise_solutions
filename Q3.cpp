#include<iostream>
#include<vector>
using namespace std;

int maxprofit(vector<int> prices){
    int size = prices.size();
    int minprice = prices[0];
    int ans=0;
    for(int i=1;i<size;i++){
        ans= max(ans,prices[i]-minprice);
        minprice = min(prices[i],minprice);
    }
    return ans;
}


int main(){
    vector<int>prices{7,6,4,3,1};
    cout<<maxprofit(prices)<<endl;
}