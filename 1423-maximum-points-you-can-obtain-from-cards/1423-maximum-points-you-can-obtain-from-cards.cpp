class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0; 
        int rsum = 0;
        int maxsum;
        int n = cardPoints.size();
        for(int i = 0 ;i<= k-1; i++)
        {
            lsum = lsum + cardPoints[i];
             maxsum = lsum;
        }
        int rbegin = n - 1;
        for(int  i = k-1 ; i >= 0 ; i--)
        {
            lsum = lsum - cardPoints[i];
            rsum = rsum + cardPoints[rbegin];
            rbegin--;
            maxsum = max(maxsum, (lsum+rsum));
        }
        return maxsum;
    }
};