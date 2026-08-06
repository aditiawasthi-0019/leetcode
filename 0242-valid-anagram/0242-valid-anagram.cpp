class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length())
            return false;

        int freq[26] = {0};

        for(int i = 0; i < s.length(); i++)
        {
            freq[s[i] - 'a']++;
        }

        for(int j = 0; j < t.length(); j++)
        {
            freq[t[j] - 'a']--;
        }

        for(auto i : freq)
        {
            if(i != 0)
                return false;
        }

        return true;
    }
};