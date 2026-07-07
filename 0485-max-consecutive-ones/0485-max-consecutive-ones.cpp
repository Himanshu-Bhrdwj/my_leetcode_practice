class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        set<int> st;
        int n = nums.size();
        int count = 0;
        int result;

        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                count++;
                st.insert(count);
            }
            else{
                count = 0;
            }
        }
        
        if(!st.empty()){
        result = *prev(st.end());
        return result;
        }
        else{
            return 0;
        }

    }
};