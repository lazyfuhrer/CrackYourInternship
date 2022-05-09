class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int start=0, end=cardPoints.size()-k;
        int total = accumulate(cardPoints.begin()+end, cardPoints.end(), 0);
        int maxi = total;
        
        while (end<cardPoints.size()) {
            total += cardPoints[start] - cardPoints[end];
            maxi = max(total, maxi);
            start++; end++;
        }
        return maxi;
    }
};
