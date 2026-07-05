class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        bool result = false;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i != j && arr[i] == 2 * arr[j]){
                    result = true;
                    break;
                }
            }
        }

        if(result){
            return true;
        }
        else{
            return false;
        }
    }
};