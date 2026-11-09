class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int add = 0;
        for(int i = 0; i < k; i++){
            add += nums[i];
        }
        int maxSum = add;
        // double avg = -1000000;
        // int i = 0;
        int startIndex = 0;
        int endIndex = k;
        while(endIndex < n){
            add -= nums[startIndex];
            startIndex++;
            add += nums[endIndex];
            endIndex++;
            maxSum = max(add, maxSum);
        }
        return (double)maxSum/k;
    }
};