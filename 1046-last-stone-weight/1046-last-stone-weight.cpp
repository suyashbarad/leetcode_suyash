class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());
            int a = stones.back();
            stones.pop_back();
            int b = stones.back();
            stones.pop_back();
            if(a != b){
                stones.push_back(a-b);
            }
        }
        if(stones.size() == 0){
            return 0;
        }
        return stones[0];
    }
};