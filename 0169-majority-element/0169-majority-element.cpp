class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> arr;
        int n = nums.size();
        int result;

        for(int i = 0; i < n; i++){
            arr[nums[i]]++;
            if(arr[nums[i]] > n / 2){
                result = nums[i];
            }
        }

        return result;
    }
};