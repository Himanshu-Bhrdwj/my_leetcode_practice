class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int largest = INT_MIN;
        int result;
        int value;

        for(int i = 0; i < n; i++){
            if(largest < nums[i]){
                largest = nums[i];
                result = i;
            }
        }
        value = result;

        for(int j = 0; j < n; j++){
            if(j == result){
                continue;
            }
            else if(largest < 2 * nums[j]){
                result = -1;
            }
        }

        if(result == -1){
            return -1;
        }
        else{
            return value;
        }
    }
};