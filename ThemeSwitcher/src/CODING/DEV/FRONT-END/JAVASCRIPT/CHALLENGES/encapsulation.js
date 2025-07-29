// Task 1: Encapsulation Using Getters and Setters
// Create a class BankAccount with a private property _balance. Add methods deposit(amount) and withdraw(amount). Use getters and setters to access and modify the _balance while ensuring the balance never goes negative.

class BankAccount{
    area(balance = 0){
        this._balance = balance;
    }
    get balance(){
        return this._balance;
    }
    set balance(amount){
        if (amount < 0) {
            throw new Error('Balance cannot be negative');
        }
        this._balance = amount;
    }
    deposit(amount){
        this._balance += amount;
    }
    withdraw(amount){
        if(amount > this._balance){
            throw new Error('Insufficient funds');
        }
        this._balance -= amount;
    }
}
let user = new BankAccount();
user.deposit(56000)
// user.withdraw(66000)
// console.log(user.balance);
// console.log(user.balance);




// Task 2: Polymorphism with Method Overriding
// Create a class Shape with a method area() that returns 0. Create two subclasses Circle and Rectangle that override the area() method to calculate the area of a circle and a rectangle, respectively.
class Shape{
    area(){
        return 0;
    }
}
class Circle extends Shape {
    constructor(radius){
        super();
        this.radius = radius;
    }
    area() {
        return Math.PI * this.radius * this.radius;
    }
}
class Rectange extends Shape {
    constructor(length,width){
        super();
        this.length = length;
        this. width = width;
    }
    area() {
        return this.length * this.width;
    }
}
let c1 = new Circle(7);
let r1 = new Rectange(5,7);
console.log(c1.area());
console.log(r1.area());

