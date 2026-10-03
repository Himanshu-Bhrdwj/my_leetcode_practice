class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        sum.push_back(nums[0]);

        for (int i = 0; i < nums.size() - 1; i++)
        {
        sum.push_back(sum[i] + nums[i + 1]);
        }
       
        return sum;
    }
};