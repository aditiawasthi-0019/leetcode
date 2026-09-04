class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mini=INT_MAX, maxi=INT_MIN;
        int instability =0; 
        for(int i = 0 ; i < nums.size();i++)
        {
            mini = INT_MAX;
            maxi = max(maxi , nums[i]);
            for(int j =i ; j<nums.size() ; j++)
            {
                mini = min(mini , nums[j]);
            }
            instability = maxi - mini;
            if(instability <= k)
            return i;
        }
        return -1;
    }
};