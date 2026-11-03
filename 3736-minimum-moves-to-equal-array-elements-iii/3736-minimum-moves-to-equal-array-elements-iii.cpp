class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int max = nums[0];
        for(int i = 0; i < n; i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }
        int count = 0;
        for(int i = 0; i < n; i++){
            count += max - nums[i];
        }
        return count;
    }
};