class Solution {
public:
    int maxArea(vector<int>& height) {
        int width, hght, area, maxWater = 0;
        int left = 0;
        int right = height.size() - 1;

        while(left < right){
            width = right - left;
            hght = min(height[left], height[right]);
            area = width * hght;
            maxWater = max(maxWater, area);

            (height[left] < height[right]) ? left++ : right--;
        }

        
        return maxWater;
    }
};