class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length())
            return false;

        if (s == goal)
            return true;

        int n = s.length();

        for (int i = 0; i < n; i++) {
            char ch = s[0];
            s.erase(0, 1);
            s += ch;

            if (s == goal)
                return true;
        }

        return false;
    }
};