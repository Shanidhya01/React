// Task 1: Creating a Counter Using Closures
// Create a function createCounter() that returns a function which increments and returns a counter value each time it is called.
function createCounter() {
    let count = 0;
    return function() {
        count++;
        return count;
    }
}
const counter = createCounter();
console.log(counter()); // Output: 1
console.log(counter()); // Output: 2





// Task 2: Rate Limiter Function
// Create a function rateLimiter(fn, limit) that returns a new function. The returned function allows calling fn only once within a limit time in milliseconds. If it is called again before the limit is reached, it should return "Rate limit exceeded".
function rateLimiter(fn, limit) {
    let lastCallTime = 0;
    return function(...args) {
        const now = Date.now();
        if (now - lastCallTime < limit) {
            return "Rate limit exceeded";
        }
        lastCallTime = now;
        return fn(...args);
    }
}
const limitedFn = rateLimiter((a, b) => a + b, 1000);
console.log(limitedFn(2, 3)); // Output: 5
console.log(limitedFn(4, 5)); // Output: "Rate limit exceeded"




// Task 3: Memoization Function
// Write a function memoize(fn) that returns a memoized version of fn. The memoized function should cache the results of function calls, and return the cached result if the same inputs are provided again.
function memoize(fn) {
    const cache = {};
    return function(...args) {
        const key = JSON.stringify(args);
        if (key in cache) {
            return cache[key];
        }
        const result = fn(...args);
        cache[key] = result;
        return result;
    }
}
const memoizedFn = memoize((a, b) => a + b);
console.log(memoizedFn(2, 3)); // Output: 5
console.log(memoizedFn(3, 3)); // Output: 6