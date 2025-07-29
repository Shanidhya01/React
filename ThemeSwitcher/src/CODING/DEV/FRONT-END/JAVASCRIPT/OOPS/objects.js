let car = {
    make : "Toyota",
    model : "LC300",
    year : 2024,
    start: function(){
        return `${this.make} ${this.model} car got started in ${this.year}`;
    },
}
console.log(car.start());



function Person(name,age){
    this.name = name;
    this.age = age;
}
let john = new Person("John",20);
console.log(john.name);



function Animal(type){
    this.type = type
}
Animal.prototype.speak = function(){
    return `${this.type} makes a sound`;
}

Array.prototype.Shanidhya = function(){
    return `Custom method ${this}`;
}

let myArray = [1,2,3];
console.log(myArray.Shanidhya());
let myNewArray = [1,2,3,4,5];
console.log(myNewArray.Shanidhya());




class Vehicle{
    constructor(make,model){
        this.make = make;
        this.model = model;
    }
    start(){
        return `${this.model} is a car from ${this.make}`;
    }
}
class Car extends Vehicle{
    drive(){
        return `${this.make} : This is an Inheritance Example`;
    }
}
let mycar = new Car("Toyata","LC300");
// console.log(mycar.start());
// console.log(mycar.drive());
let veh1 = new Vehicle("Tata","Nano");
console.log(veh1.make);
