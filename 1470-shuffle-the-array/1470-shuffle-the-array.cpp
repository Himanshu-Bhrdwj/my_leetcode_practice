class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>arrange;
        for(int i = 0; i < n; i++){
            arrange.push_back(nums[i]);
            arrange.push_back(nums[i + n]);
        }
        return arrange;        
    }
};