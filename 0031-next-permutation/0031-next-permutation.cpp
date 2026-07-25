class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivotInx = -1;

    for (int j = nums.size() - 1; j > 0; j--)
    {
        if (nums[j] > nums[j - 1])
        {
            pivotInx = (j - 1);
            break;
        }
    }
    if (pivotInx == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    for (int i = nums.size() - 1; i > pivotInx; i--)
    {
        if (nums[i] > nums[pivotInx])
        {
            swap(nums[pivotInx], nums[i]);
            break;
        }
    }

    reverse(nums.begin() + pivotInx + 1, nums.end());

    }
};