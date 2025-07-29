const person = {
    name : "Shanidhya",
    greet(){
        console.log(`Hello ${this.name}`);        
    },
};

person.greet();
const greetFunction = person.greet;
greetFunction();

const boundGreet = person.greet.bind({name : "Hitesh"});
boundGreet();


// bind call and apply
const boundGreet2 = person.greet.bind({name : "Hitesh"});
boundGreet2();