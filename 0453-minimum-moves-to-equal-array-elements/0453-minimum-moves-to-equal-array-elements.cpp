class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int mini_num = *min_element(nums.begin() , nums.end());
        for(int i = 0; i<nums.size() ; i++)
        {
            int dif= nums[i] - mini_num;
            ans = ans+dif;
        }
        return ans;
    }
};