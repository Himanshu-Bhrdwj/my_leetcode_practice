class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>result;
        int largest = candies[0];
        for(int i = 0; i < candies.size(); i++){
            if(largest < candies[i]){
                largest = candies[i];
            }
        }

        for(int j = 0; j < candies.size(); j++){
            if(largest <= candies[j] + extraCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }

        return result;
    }
};