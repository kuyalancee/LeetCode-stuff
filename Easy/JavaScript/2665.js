/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */

const createCounter = (init) => {
    let curr = init;
    let increment = () => {
        curr++;
        return curr;
    }
    let decrement = () => {
        curr--;
        return curr;
    }
    let reset = () => {
        curr = init;
        return curr;
    }
    return {
        increment: increment,
        decrement: decrement,
        reset: reset
    }
}

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */