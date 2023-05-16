/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
let ans = init;
  let  increment = function()
    {
       ans++; 
        return ans;
    }
    let decrement = function()
    {
        ans--;
        return ans;
    }
    let reset = function()
    {
      ans = init;
        return ans;
    }
    return { increment, decrement, reset }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */