class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            int temp;
            for(int j = 0; j < n; j++){
                if(nums[i] < nums[j]){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
};