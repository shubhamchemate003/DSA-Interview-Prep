#define pb push_back

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        if (numRows >= 2) ans.pb({1, 1});

        for (int i = 3; i <= numRows; i++) {
            vector<int> cur = {1};
            for (int j = 0; j < ans.back().size() - 1; j++)
                cur.pb(ans.back()[j] + ans.back()[j + 1]);
            cur.pb(1);
            ans.pb(cur);
        }

        return ans;
    }
};
