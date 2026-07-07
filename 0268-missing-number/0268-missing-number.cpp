class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int totalSum = 0;
        int result;

        for(int i : nums){
            sum += i;
        }

        for(int i = 1; i <=n; i++){
            totalSum += i;
        }

        result = totalSum - sum;

        return result;
    }
};