class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for (int x : nums) {
        s.insert(x);
        }
        if(s.size() >= 3)
        {
            return *next(s.rbegin(), 2);
        }
        return *s.rbegin();
    }
};