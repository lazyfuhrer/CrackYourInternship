class Solution {
public:
    int trap(vector<int>& height) {
        int start=0, end=height.size()-1, leftMax=0, rightMax=0, ans=0;
    
        while (start<=end) {
            if (height[start] <= height[end]) {
                if (leftMax > height[start])
                    ans += leftMax - height[start];
                else leftMax = height[start];
                start++;
            }
            else {
                if (rightMax > height[end])
                    ans += rightMax - height[end];
                else rightMax = height[end];
                end--;
            }
        }
        return ans;
    }
};
