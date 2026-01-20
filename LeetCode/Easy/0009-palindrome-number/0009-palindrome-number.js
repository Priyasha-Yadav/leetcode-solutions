/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    x=String(x);
  let y = x.split('').reverse().join('');
  if(x==y){
    return true
  }
  else {
    return false
  }
};