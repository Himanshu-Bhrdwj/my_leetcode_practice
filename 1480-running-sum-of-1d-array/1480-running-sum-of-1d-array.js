/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    const sum = [];
    sum[0] = nums[0];

    for(let i = 0; i < nums.length - 1; i++){
        sum[i + 1] = sum[i] + nums[i + 1];
    }

    return sum;
};