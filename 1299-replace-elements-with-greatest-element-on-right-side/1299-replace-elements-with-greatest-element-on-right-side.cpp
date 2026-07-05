class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0; i < n; i++){
            int largest = INT_MIN;
            for(int j = i + 1; j < n; j++){
                if(largest < arr[j]){
                    largest = arr[j];
                    arr[i] = largest;
                }
            }
        }
        arr[n - 1] = -1;

       return arr;
    }
};