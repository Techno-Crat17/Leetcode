class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,
             vector<vector<int>>& ans, int inicolor) {
        int dc[] = {0, 1, 0, -1};
        int dr[] = {-1, 0, 1, 0};

        int m = image.size();
        int n = image[0].size();

        ans[sr][sc] = color;

        for (int i = 0; i < 4; i++) {
            int nx = sr + dr[i];
            int ny = sc + dc[i];

            if (nx >= 0 && nx < m && ny >= 0 && ny < n &&
                image[nx][ny] == inicolor && ans[nx][ny] != color) {
                dfs(image, nx, ny, color, ans, inicolor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        vector<vector<int>> ans = image;
        int inicolor = ans[sr][sc];
        if (inicolor == color)
            return image; // no change req

        dfs(image, sr, sc, color, ans, inicolor);
        return ans;
    }
};