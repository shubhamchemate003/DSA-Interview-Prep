class Solution {
    int n, m;
public:
    void setZeroes(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();

        int zrow = -1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (matrix[i][j] == 0)
                    zrow = i;

        if (zrow == -1)
            return;

        for (int j = 0; j < m; j++) {
            bool f = 0;
            for (int i = 0; i < n; i++)
                f |= (matrix[i][j] == 0);
            if (f) matrix[zrow][j] = 1;
            else matrix[zrow][j] = 0;
        }

        for (int i = 0; i < n; i++)
            if (i != zrow) {
                bool f = 0;
                for (int j = 0; j < m; j++)
                    f |= (matrix[i][j] == 0);
                if (f) for (int j = 0; j < m; j++) matrix[i][j] = 0;
            }

        for (int j = 0; j < m; j++)
            if (matrix[zrow][j])
                for (int i = 0; i < n; i++)
                    matrix[i][j] = 0;
    }
};