class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int original = x;
        long long reverse = 0;
        while(x>0){
            int digits = x % 10;
            reverse = reverse * 10 + digits;
            x = x/10;
        }
        if(original == reverse){
            return true;
        }
        else{
            return false;
        }
    }
};