class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int val = nums[0], ans=0;
        for(int i=0; i<nums.size(); ++i)
            ans += nums[i]-val;
        return ans;
    }
};
