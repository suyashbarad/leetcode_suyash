class Solution {
public:
    long long minOperations(vector<int>& nums, int x, int k) {
        int n = nums.size();

        multiset<int> left, right;
        long long leftSum = 0, rightSum = 0;

        vector<long long> cost;

        for(int i = 0; i < n; i++) {
            if(left.empty() || nums[i] <= *left.rbegin()) {
                left.insert(nums[i]);
                leftSum += nums[i];
            }
            else {
                right.insert(nums[i]);
                rightSum += nums[i];
            }

            if(i >= x) {
                int val = nums[i-x];
                auto it = left.find(val);

                if(it != left.end()) {
                    left.erase(it);
                    leftSum -= val;
                }
                else {
                    it = right.find(val);
                    right.erase(it);
                    rightSum -= val;
                }
            }

            if(left.size() < right.size()) {
                int val = *right.begin();
                right.erase(right.begin());
                left.insert(val);
                rightSum -= val;
                leftSum += val;
            }
            else if(left.size() > right.size() + 1) {
                int val = *left.rbegin();
                left.erase(prev(left.end()));
                right.insert(val);
                leftSum -= val;
                rightSum += val;
            }

            if(i >= x-1) {
                int median = *left.rbegin();

                long long operations =
                    (long long)median * left.size() - leftSum
                    + rightSum - (long long)median * right.size();

                cost.push_back(operations);
            }
        }

        const long long INF = 1e18;

        vector<vector<long long>> dp(
            n + 1, vector<long long>(k + 1, INF)
        );

        dp[0][0] = 0;

        for(int i = 1; i <= n; i++) {
            for(int j = 0; j <= k; j++) {
                dp[i][j] = dp[i-1][j];

                if(j > 0 && i >= x) {
                    dp[i][j] = min(
                        dp[i][j],
                        dp[i-x][j-1] + cost[i-x]
                    );
                }
            }
        }

        return dp[n][k];
    }
};