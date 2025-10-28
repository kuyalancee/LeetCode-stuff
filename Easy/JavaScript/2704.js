//https://leetcode.com/problems/to-be-or-not-to-be/description/?envType=study-plan-v2&envId=30-days-of-javascript

//to be or not to be

/**
 * @param {string} val
 * @return {Object}
 */

var expect = function(val) {
    return{
        toBe: function(compareVal){
            if (val === compareVal) return true;
            else throw new Error("Not Equal")
        },
        notToBe: function(compareVal){
            if (val !== compareVal) return true;
            else throw new Error("Equal")
        }
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */

//completed 10.28 with AI help