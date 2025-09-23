/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let arr = s.trim().split(' ');
    console.log(arr);
    str = arr[arr.length - 1];
    return str.length;
};