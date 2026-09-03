class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int maxLen=0;
        int cnt;
        int curr;

        for(int num : st)
        {
            if(st.find(num-1) == st.end())
            {
                curr= num;
                cnt = 1;
            while(st.find(curr+1) != st.end())
            {
                curr++;
                cnt++;
            }
            maxLen = max(maxLen, cnt);
        }
        }
        return maxLen;

    }
};