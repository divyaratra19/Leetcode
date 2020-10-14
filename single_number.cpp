class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorNo=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            xorNo^=nums[i];
        }
        return xorNo;
    }
};
