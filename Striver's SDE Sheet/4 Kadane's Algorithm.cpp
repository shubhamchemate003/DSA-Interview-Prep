class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums.back();
        int pre = 0;
        for (int x : nums) {
            int cur = max(pre + x, x);
            ans = max(ans, cur);
            pre = cur;
        }
        return ans;
    }
};