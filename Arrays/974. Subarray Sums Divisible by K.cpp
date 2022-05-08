class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp; int ans=0, sum=0, rem;
        mp[0] = 1;
        
        for (int i=0; i<nums.size(); ++i) {
            sum += nums[i];
            rem = sum%k;
            
            if (rem<0)
                rem += k;
            if (mp[rem]) {
                ans += mp[rem];
                mp[rem]++;
            }
            else mp[rem] = 1;
        }
        return ans;
    }
};
