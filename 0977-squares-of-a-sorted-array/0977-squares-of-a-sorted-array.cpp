class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> square;
        int n = nums.size();

        for(int i : nums){
            square.insert(square.begin(), (i * i));
        }
        sort(square.begin(), square.end());

        return square;
    }
};