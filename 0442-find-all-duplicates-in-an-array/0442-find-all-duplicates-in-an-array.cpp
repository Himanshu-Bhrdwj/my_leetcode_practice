class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> answer;
        unordered_set<int> seen;
        for(int x : nums){
            if(seen.count(x)){
                answer.push_back(x);
            }
            else{
                seen.insert(x);
            }
        }

        return answer;
    }
};