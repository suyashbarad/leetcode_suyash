class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> sums(n);
        int sum = nums[0];
        sums[0] = sum;
        for(int i = 1; i < nums.size(); i++){
            sum += nums[i];
            sums[i] = sum;

        }
        return sums;
    }
};