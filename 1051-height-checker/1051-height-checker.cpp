class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr;
        int n = heights.size();
        int count = 0;

        for(int i : heights){
            arr.push_back(i);
        }

        sort(arr.begin(), arr.end());

        for(int i = 0; i < n; i++){
            if(heights[i] != arr[i]){
                count++;
            }
        }

        return count;
    }
};