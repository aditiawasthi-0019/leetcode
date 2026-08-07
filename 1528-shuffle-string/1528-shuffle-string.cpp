class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int len= s.length();
        string result(s.length(), ' ');
        for(int i = 0 ; i< len;i ++)
        {
            result[indices[i]] = s[i];
        }
        return result;

    }
};