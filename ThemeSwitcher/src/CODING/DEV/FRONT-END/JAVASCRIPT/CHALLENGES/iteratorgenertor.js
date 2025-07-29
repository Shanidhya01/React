// Task 1: Creating a Simple Generator
// Create a generator function numberGenerator() that yields numbers from 1 to 3.
function * numberGenerator() {
    yield 1;
    yield 2;
    yield 3;    
}

let gen = numberGenerator();
console.log(gen.next().value);
console.log(gen.next().value);
console.log(gen.next().value);




// Task 2: Create a Custom Iterator
// Create a custom iterator called rangeIterator(start, end) that returns an object that iterates over numbers from start to end.
// Each call to .next() should return the next number in the range until it reaches end.
function  rangeIterator(start, end) {
    let current = start;    
    return {
        next: function() {
            if (current <= end) {
                return { value: current++, done: false };
            } else {
                return { done: true };
            }
        }
    }
}
rangeIterator = rangeIterator(1, 10);
console.log(rangeIterator.next().value);
console.log(rangeIterator.next().value);
console.log(rangeIterator.next().value);
console.log(rangeIterator.next().value);





// Task 3: Generator Function for Fibonacci Sequence
// Create a generator function fibonacciGenerator() that yields numbers from the Fibonacci sequence indefinitely (1, 1, 2, 3, 5, 8, etc.).
// Use the next() method to get the next Fibonacci number.
function * fibonacciGenerator() {
    let a = 1;
    let b = 1;
    while (true) {
        let next = a+b;
        yield next;
        a = b;        
        b = next;
    }
}

let genTwo = fibonacciGenerator();    
console.log(genTwo.next().value);
console.log(genTwo.next().value);        
console.log(genTwo.next().value);   