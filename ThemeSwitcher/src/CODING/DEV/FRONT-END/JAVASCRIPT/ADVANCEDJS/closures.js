// closures is a function that has access to the variables in the parent scope, even after the parent function has closed

function outer() {
    let counter = 4;
    return function (){
        counter++;
        return counter;
    }
}
let increment = outer();
console.log(increment());
console.log(increment());
console.log(increment());
console.log(increment());
