class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = n;
        
        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                ans = i;
                return ans;
            }
            else if(nums[i] > target){
                ans = i;
                return ans;
            }
        }
        return ans;
    }
};