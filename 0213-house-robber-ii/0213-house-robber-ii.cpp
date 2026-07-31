class Solution {
public:
int rob(int index, int end, vector<int>& nums, vector<int>& dp) {
if (index > end)
 return 0;
if (dp[index] != -1)
return dp[index];

int take = nums[index] + rob(index + 2, end, nums, dp);
int notTake = rob(index + 1, end, nums, dp);
return dp[index] = max(take, notTake);
    }

int rob(vector<int>& nums) {
int n = nums.size();
if (n == 1)
return nums[0];
vector<int> dp1(n, -1);
vector<int> dp2(n, -1);

int case1 = rob(0, n - 2, nums, dp1);
int case2 = rob(1, n - 1, nums, dp2);
return max(case1, case2);
    }
};