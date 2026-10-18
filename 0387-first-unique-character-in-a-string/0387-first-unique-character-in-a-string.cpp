class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        bool visited[n];
        for(int i = 0; i < n; i++){
            visited[i] = false;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && s[i] == s[j]){
                    visited[i] = true;
                    break;
                }
            }
            if(visited[i] == false){
                return i;
            }
        }
        return -1;

    }
};