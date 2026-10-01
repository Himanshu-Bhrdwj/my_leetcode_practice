class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax = nums[0];
        int currMin = nums[0];
        int largest = nums[0];

        for(int i = 1; i < nums.size(); i++){
            int val = nums[i];

            int tempMax = max({val, currMax * val, currMin * val});
            int tempMin = min({val, currMax * val, currMin * val});

            currMax = tempMax;
            currMin = tempMin;

            largest = max(largest, currMax);
        }
        return largest;
    }
};