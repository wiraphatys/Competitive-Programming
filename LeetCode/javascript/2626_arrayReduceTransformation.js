/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function (nums, fn, init) {
    let currVal = init;
    if (nums.length === 0) {
        return init;
    }

    for (let i = 0; i < nums.length; ++i) {
        currVal = fn(currVal, nums[i]);
    }

    return currVal;
};