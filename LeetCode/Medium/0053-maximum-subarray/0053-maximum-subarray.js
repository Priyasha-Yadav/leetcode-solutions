/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
    let r = 0, c = 0;
    for (let i = 0; i < nums.length; i++) {
        c = Math.max(nums[i], c + nums[i]);
        r = Math.max(r, c);
    }
    return r;
};