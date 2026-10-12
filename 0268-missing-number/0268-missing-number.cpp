class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s;
        int actsum = 0;
        s = (n *(n+1))/2;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            actsum = actsum + nums[i];
        }
        int mis = s - actsum;
        return mis;
    }
};