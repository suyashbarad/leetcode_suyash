class Solution {
public:
    int strStr(string haystack, string needle) {
        int l1 = haystack.length();
        int l2 = needle.length();
        for(int i = 0; i <= l1-l2; i++){
            int j;
            for(j = 0; j < l2; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
            }
            if(j == l2){
                return i;
            }
        }
        return -1;
    }
};