class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, int> mp = {{'(', 1}, {'{', 2}, {'[', 3}, {')', -1}, {'}', -2}, {']', -3}};
        stack<char> st;
        for (auto ch: s) {
            if (mp[ch] > 0)
                st.push(ch);
            else {
                if (st.empty()) return false;
                char val = st.top();
                st.pop();
                if (mp[val]+mp[ch] != 0)
                    return false;
            }
        }
        if (st.empty())
            return true;
        else return false;
    }
};
