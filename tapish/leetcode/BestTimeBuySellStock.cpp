//Problem link - https://leetcode.com/problems/Best-Time-to-Buy-and-Sell-Stock/#/description
//One pass algo - while parsing array, keep a track of the minimum number encountered till now and substract it from the
//current element. Only this difference can give the maximum profit achievable till the current element.
int maxProfit(vector<int>& prices) {
    int size = prices.size();
    int maxprofit = 0;
    if (size > 0) {
        int min = prices[0];
        for (int i = 1; i < size; i++) {
            int curmaxprofit = prices[i] - min;
            if (maxprofit < curmaxprofit) {
                maxprofit = curmaxprofit;
            }
            if (min > prices[i]) {
                min = prices[i];
            }
        }
    }
    return maxprofit;
}
