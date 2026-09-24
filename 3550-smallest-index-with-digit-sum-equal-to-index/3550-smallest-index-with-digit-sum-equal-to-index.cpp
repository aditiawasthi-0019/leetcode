class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int d;
        int n;
        long long sum=0; 

        for(int i = 0 ; i< nums.size() ; i++)
        {
            n = nums[i];
            sum = 0;
            while(n > 0)
            {
                d = n % 10;
                sum += d;
                n = n /10;
            }
            if(i == sum)
            return i;
            
        }
        return -1;
    }
};