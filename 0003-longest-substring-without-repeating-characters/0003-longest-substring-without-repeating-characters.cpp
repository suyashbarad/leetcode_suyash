class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int max1 = 0;
        for(int j = 0; j < n; j++){
            int count[256] = {0};
            int count1 = 0;
            for(int i = j; i < n; i++){
                if(count[s[i]] == 0){
                    count[s[i]] = 1;
                    count1++;
                }
                else{
                    break;
                }
            }
            max1 = max(max1, count1);
        }
        return max1;
    }
};