/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    let firstMax = -Infinity;
    let secondMax = -Infinity;
    let thirdMax = -Infinity;
    let n = nums.length;

    for(let x of nums){
        if(x === firstMax || x === secondMax || x === thirdMax){
            continue;
        }

        if(x > firstMax){
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = x;
        }
        else if(x > secondMax){
            thirdMax = secondMax;
            secondMax = x;
        }
        else if(x > thirdMax){
            thirdMax = x;
        }
    }

    if (thirdMax === -Infinity) {
    return firstMax;
    }
    else{
        return thirdMax;
    }

};