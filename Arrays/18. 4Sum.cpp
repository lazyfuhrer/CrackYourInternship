class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans;
        int size = nums.size();
        
        if (size<4)
            return ans;
    
        for (int i=0; i<size; ++i) {
            if (i>0 && nums[i]==nums[i-1])
                continue;
            for (int j=i+1; j<size; ++j) {
                if (j>i+1 && nums[j]==nums[j-1])
                    continue;
            
                int start=j+1, end=size-1;
                while(start<end) {
                    long sum = long(nums[i])+long(nums[j])+long(nums[start])+long(nums[end]);
                    if (sum<target)
                        start++;
                    else if (sum>target)
                        end--;
                    else {
                        ans.push_back({nums[i], nums[j], nums[start], nums[end]});
                        start++;
                        while (start<end && nums[start]==nums[start-1])
                            start++;
                    }    
                }
            }
        }
        return ans;
    }
};
