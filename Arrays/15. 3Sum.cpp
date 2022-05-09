class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > ans;
        sort(nums.begin(), nums.end());
        
        if (nums.size()<3 || nums[0]>0)
            return ans;
        
        for (int i=0; i<nums.size(); ++i) {
            if (i>0 && nums[i]==nums[i-1])
                continue;
        
            int start=i+1, end=nums.size()-1;
            while(start<end) {
                int sum = nums[i]+nums[start]+nums[end];
                if (sum>0)
                    end--;
                else if (sum<0)
                    start++;
                else {
                    ans.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    while (start<end && nums[start]==nums[start-1])
                        start++;
                }
            }
        }
        return ans;
    }
};
