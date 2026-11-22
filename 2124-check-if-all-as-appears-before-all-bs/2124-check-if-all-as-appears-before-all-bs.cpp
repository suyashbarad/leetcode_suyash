class Solution {
public:
    bool checkString(string s) {
        int n = s.length();
        int x = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == 'b'){
                x = i;
                break;
            }
        }
        if(x == -1){
            return true;
        }
        for(int i = x; i < n; i++){
            if(s[i] != 'b'){
                return false;
            }
        }
        return true;
    }
};