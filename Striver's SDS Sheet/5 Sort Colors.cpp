class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x = 0, y = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[y]);
                swap(nums[y], nums[x]);
                x++, y++;
            }
            else if (nums[i] == 1) {
                swap(nums[i], nums[y]);
                y++;
            }
        }
    }
};