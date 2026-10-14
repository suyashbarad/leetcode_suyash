class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int smallest = prices[0];
        int largest = 0;
        for(int i = 0; i < n; i++){
            if(prices[i] < smallest){
                smallest = prices[i];
            }
            else if(prices[i]-smallest > largest){
                largest = prices[i]-smallest;
            }
        }
        return largest;
    }
};