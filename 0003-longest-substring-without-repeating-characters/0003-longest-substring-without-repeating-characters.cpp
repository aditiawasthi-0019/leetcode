class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int maxlen = 0;
        int l = 0, r = 0;
        int n = s.size();

        vector<int> mp(256, -1);

        while (r < n) {

            if (mp[s[r]] >= l) {
                l = mp[s[r]] + 1;
            }

            mp[s[r]] = r;

            int len = r - l + 1;

            maxlen = max(maxlen, len);

            r++;
        }

        return maxlen;
    }
};