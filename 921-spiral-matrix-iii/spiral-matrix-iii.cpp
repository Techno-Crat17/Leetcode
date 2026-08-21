class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart,
                                        int cStart) {

        int step = 1;
        int dir = 0;

        // R,D,L,U
        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};

        vector<vector<int>> ans;
        while (ans.size() < rows * cols) {

            // ek steps value lo, 2 directions mein utne steps chalo steps++ karo
            for (int i = 0; i < 2; i++) {

                for (int j = 0; j < step; j++) {

                    if (rStart >= 0 && rStart < rows && cStart >= 0 &&
                        cStart < cols){
                        ans.push_back({rStart, cStart});
                }

                rStart = rStart + dr[dir];
                cStart = cStart + dc[dir];
            }

            dir = (dir + 1) % 4;
        }
        step++;
        }

        return ans;
    }
};