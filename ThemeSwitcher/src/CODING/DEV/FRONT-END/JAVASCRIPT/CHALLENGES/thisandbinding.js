// Task 1: Bind the Correct Context
// Create an object person with properties name and a method introduce(). Use the bind() method to ensure the method works correctly when passed to another function.
person = {
    name : "Shanidhya",
    introduce(){
        console.log(`Hi,my name is ${this.name}`);
    }
}
const introducePerson = person.introduce.bind(person);
introducePerson();




// Task 2: Using call() to Invoke a Function with Different Contexts
// Write a function introduce() that uses the this keyword to introduce a person by name. Then, invoke introduce() using call() to introduce different people with the same function.
function introduce(){
    return `Hi,my name is ${this.name}`;
}
const person1 = {name : "Shanidhya"};
const person2 = {name : "Hitesh"};
console.log(introduce.call(person1));
console.log(introduce.call(person2));


// Task 3: Using apply() to Pass Arguments with Context
// Create a function sum() that accepts two numbers and uses this to access a multiplier value. Then, invoke sum() with different contexts using apply(), passing the numbers as an array.
function sum(num1,num2){
    return this.multiplier * (num1 + num2);
}
const obj1 = {multiplier : 2};
const obj2 = {multiplier : 3};
console.log(sum.apply(obj1,[3,4]));
console.log(sum.apply(obj2,[3,4]));