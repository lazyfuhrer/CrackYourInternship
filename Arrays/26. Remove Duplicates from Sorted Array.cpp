class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for (int i=0; i<nums.size(); ++i) {
            st.insert(nums[i]);
        }
        vector<int> v(st.begin(), st.end());
        for (int i=0; i<v.size(); ++i) {
            nums[i] = v[i];
        }
        return v.size();
    }
};
