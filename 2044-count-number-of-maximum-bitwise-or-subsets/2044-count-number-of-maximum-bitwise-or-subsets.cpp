class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();

        int maxOR = 0;
        for (int x : nums)
            maxOR |= x;

        int count = 0;

        for (int mask = 1; mask < (1 << n); mask++) {

            int currentOR = 0;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    currentOR |= nums[i];
                }
            }

            if (currentOR == maxOR)
                count++;
        }

        return count;
    }
};