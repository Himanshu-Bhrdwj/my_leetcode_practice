class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int>middle;
        vector<int>right;
        vector<int>result;

        for(int x : nums){
            if(x < pivot){
                left.push_back(x);
            }
            else if(x == pivot){
                middle.push_back(x);
            }
            else{
                right.push_back(x);
            }
        }

        result.insert(result.end(), left.begin(), left.end());
        result.insert(result.end(), middle.begin(), middle.end());
        result.insert(result.end(), right.begin(), right.end());
        
        return result;
    }
};