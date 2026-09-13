class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        int temp;
        for(int k =0 ;k <= 31; k++)
        {
            temp = (1 << k);
            int cntzero = 0 , cntone = 0;
            for(int &num : nums)
            {
                if((num & temp) == 0)
                {
                cntzero++;
                }
                else
                cntone++;
            }
            if(cntone % 3 != 0)
            result = result| temp;
        }
        return result;
    }
};