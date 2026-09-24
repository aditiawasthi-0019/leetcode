class Solution {
public:
    string reverseVowels(string s) {
        int len = s.length();
        int i = 0;
        int j = len - 1;
        while(i < j)
        {
            if(tolower(s[i]) != 'a' && tolower(s[i]) != 'e' && tolower(s[i]) != 'i' && tolower(s[i]) != 'o' && tolower(s[i]) != 'u')
            i++;
            else if (tolower(s[j]) != 'a' && tolower(s[j]) != 'e' && tolower(s[j]) != 'i' && tolower(s[j]) != 'o' && tolower(s[j]) != 'u')
            {
                j--;
            }
            else
            {
                char temp;
temp = s[i];
s[i] = s[j];
s[j] = temp;
                i++;
                j--;
            } 
            
            }
        return s;
    }
};