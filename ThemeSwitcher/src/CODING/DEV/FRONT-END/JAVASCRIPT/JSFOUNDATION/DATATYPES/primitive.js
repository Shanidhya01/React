// Number

let balance = 120;
let anotherbalance = new Number(120);

// console.log(balance);
// console.log(anotherbalance.valueOf());

// console.log(typeof balance);
// console.log(typeof anotherbalance);

//BOOLEAN 
let iscative = true;
let isreallyactive = new Boolean(true);

// console.log(iscative);
// console.log(isreallyactive.valueOf());  // not recommended


// null and undefined
let firstname = null;
let lastname = undefined;
// console.log(firstname);
// console.log(lastname);


//String 
let mystring = "hello";
let mystringone = 'hola';
let username = 'Shanidhya'

let oldgreet = mystring + " Shanidhya";
// console.log(oldgreet);

let greetmessage = `Hello ${username} !`;
let demo = `value is ${2*2}`;
// console.log(demo);

// console.log(greetmessage);

//Symbol
let sm1 = Symbol("sk");
let sm2 = Symbol("sk");
console.log(sm1 == sm2);
