
class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc,
             int color, int originalColor) {
        
        int m = image.size();
        int n = image[0].size();

        if (sr < 0 || sr >= m || sc < 0 || sc >= n)
            return;

        if (image[sr][sc] != originalColor)
            return;

        image[sr][sc] = color;

        dfs(image, sr - 1, sc, color, originalColor);
        dfs(image, sr + 1, sc, color, originalColor);
        dfs(image, sr, sc - 1, color, originalColor);
        dfs(image, sr, sc + 1, color, originalColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image,
                                  int sr, int sc, int color) {
        int originalColor = image[sr][sc];

        if (originalColor == color)
            return image;

        dfs(image, sr, sc, color, originalColor);

        return image;
    }
};
