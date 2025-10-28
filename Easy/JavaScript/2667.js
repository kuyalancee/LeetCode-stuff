//https://leetcode.com/problems/create-hello-world-function/?envType=study-plan-v2&envId=30-days-of-javascript

/**
 * @return {Function}
 */

//hello world function

var createHelloWorld = function() {
    
    return function(...args) {
        return "Hello World";
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */

//solved 10.28