class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;

        }
        vector<int>ans;
        for(auto a:mp){
            if(a.second==1){
                ans.push_back(a.first);
            }
        }
return ans;
    }
};