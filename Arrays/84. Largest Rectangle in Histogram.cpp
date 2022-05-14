class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int n = heights.size(), area=0;
    
        for (int i=0; i<=n; ++i) {
            while (!st.empty() && (i==n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int wid;
                if (st.empty()) wid=i;
                else wid = i-st.top()-1;
                area = max(area, height*wid);
            }
            st.push(i);
        }
        return area;
    }
};
