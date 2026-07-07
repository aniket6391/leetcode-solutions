class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        // Generate all subsets
        for (int mask = 0; mask < (1 << n); mask++) {

            int xorValue = 0;

            // Check every bit
            for (int i = 0; i < n; i++) {

                if (mask & (1 << i)) {
                    xorValue ^= nums[i];
                }
            }

            ans += xorValue;
        }

        return ans;
    }
};