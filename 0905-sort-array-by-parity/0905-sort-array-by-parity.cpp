class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;

        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                arr.insert(arr.end(), nums[i]);
            }
        }
        
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0){
                arr.insert(arr.end(), nums[i]);
            }
        }

        return arr;
    }
};