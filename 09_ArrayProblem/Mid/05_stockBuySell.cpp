// Question: You are given an array prices where prices[i] is the price of a given stock on the ith day.


// LeetCode - 121

# include <iostream>
# include <vector>
# include <climits>

using namespace std;

int stockBuySell(vector<int> &prices){
    int minPrice = prices[0];
    int profit = 0;
    for(int i = 1; i < prices.size(); i++){
        int cost = prices[i] - minPrice;
        profit = max(profit, cost);
        minPrice = min(minPrice, prices[i]);
    }
    return profit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};

    int profit = stockBuySell(prices);
    cout <<"The best profit is: "<< profit << endl;
    return 0;
}