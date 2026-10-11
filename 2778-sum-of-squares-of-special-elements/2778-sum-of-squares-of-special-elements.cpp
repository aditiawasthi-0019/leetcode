class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        long long s = 1LL;
        int n = nums.size();
        for(int i = 0 ; i< nums.size() ; i++)
        {
            if(n % (i+1) == 0)
            {
                s = nums[i] * nums[i];
                sum = sum + s;

            }
        }
        return sum;
    }
};