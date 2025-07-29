// Task 1: Create a Functional Constructor
// Create a functional constructor Person that takes name and age as parameters. Add a method greet() to the constructor that returns "Hello, my name is [name]".
function Person(name,age){
    this.name = name;
    this.age = age;
    this.greet = function(){
        return `Hello,my name is ${this.name}`;
    }
}
let p1 = new Person("Shanidhya",19);
console.log(p1.greet());






// Task 2: Handle Errors
// Modify the Person constructor to throw an error if the age is not a positive number.
function Person(name,age){
    if(age<0){
        throw new Error("Age can't be negative number");
    }
    this.name = name;
    this.age = age;
    this.greet = function(){
        return `Hello,my name is ${this.name}`;
    }
}
let p2 = new Person("Shanidhya",-19);
console.log(p2.greet());