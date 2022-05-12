class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size1 = m-1, size2 = n-1;
        int total = m+n-1;
     
        while (size1>=0 && size2>=0) {
            if (nums1[size1]>=nums2[size2]) {
                nums1[total] = nums1[size1];
                size1--;
            }
            else {
                nums1[total] = nums2[size2];
                size2--;
            }
            total--;
        }
    
        while (size1>=0)
            nums1[total--] = nums1[size1--];

        while (size2>=0)
            nums1[total--] = nums2[size2--];
        
    }
};
