class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>negative;
        vector<int>positive;
        vector<int>result;

        for(int i : nums){
            if(i > 0){
                positive.push_back(i);
            }
            else{
                negative.push_back(i);
            }
        }

        for(int i = 0; i < positive.size(); i++){
            result.push_back(positive[i]);
            result.push_back(negative[i]);
        }

        return result;
    }
};