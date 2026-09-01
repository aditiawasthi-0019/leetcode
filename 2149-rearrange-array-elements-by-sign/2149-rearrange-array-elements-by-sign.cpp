class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int len= nums.size();
        int p=0 , n=0;
        vector<int> pos(len/2);
        vector<int> neg(len/2);
        for(int i = 0; i<len ;i++)
        {
            if(nums[i] >= 0)
            {
            pos[p] =nums[i];
            p++;
            }
            else
            {
             neg[n] = nums[i];
            n++;
            }
        }
            
         for(int i = 0; i<len ;i++)
         {
            if(i %2 ==0)
            nums[i] = pos[i/2];
            else
            nums[i] = neg[i/2];
         }
        return nums;
    }
};