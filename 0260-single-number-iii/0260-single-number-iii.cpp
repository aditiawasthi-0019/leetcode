class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int unique = 0;

        for (int i = 0; i < nums.size(); i++) {
            unique = nums[i] ^ unique;
        }

        unsigned int u = static_cast<unsigned int>(unique);
        unsigned int mask = u & (~u + 1u);

        int num1 = 0;
        int num2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] & mask) != 0)
                num1 = num1 ^ nums[i];
            else
                num2 = num2 ^ nums[i];
        }

        return {num1, num2};
    }
};