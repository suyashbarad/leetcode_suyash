class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1;
        if(n == 0){
            return 0;
        }
        nums1.push_back(nums[0]);

        for(int i = 1; i < n; i++){
            if(nums[i] != nums[i-1]){
                nums1.push_back(nums[i]);
            }
        }
        nums = nums1;
        return nums.size();
    }
};