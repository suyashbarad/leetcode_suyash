class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        bool visited[n];
        for(int i = 0; i < n; i++){
            visited[i] = true;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && nums[i] == nums[j]){
                    visited[i] = false;
                    break;
                }
            }
        }
        for(int i = 0; i < n; i++){
            if(visited[i] == true){
                return nums[i];
            }
        }
        return -1;
    }
};