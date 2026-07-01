class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> value;
        for(int i = 0; i < accounts.size(); i++){
            int sum = 0;
            for(int j = 1; j <= accounts[0].size(); j++){
                sum += accounts[i][j-1];
            }
            value.push_back(sum);
        }
        int largest = value[0];

        for(int i = 0; i < value.size(); i++){
            if(largest < value[i]){
                largest = value[i];
            }
        }

        return largest;
    }
};