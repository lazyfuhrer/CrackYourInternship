class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> dupli, ans;
        dupli = nums;
        sort(nums.begin(), nums.end());
        
        int start=0, end = nums.size()-1;
        while (start<end) {
            if (nums[start]+nums[end] > target)
                end--;
            else if (nums[start]+nums[end] < target)
                start++;
            else break;
        }
        
        for(int i=0; i<dupli.size(); ++i) {
            if (dupli[i]==nums[start])
                ans.push_back(i);
            else if (dupli[i]==nums[end])
                ans.push_back(i);
        }
        return ans;
    }
};
