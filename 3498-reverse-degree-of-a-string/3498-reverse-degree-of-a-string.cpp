class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        int pos = 1;

        for (char ch : s) {
            int reverseValue = 26 - (ch - 'a');
            ans += reverseValue * pos;
            pos++;
        }

        return ans;
    }
};