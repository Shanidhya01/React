// encapsulation
class BankAccount{
    #balance = 0;
    deposit(amount){
        this.#balance += amount;
        return this.#balance;
    }

    getBalance(){
        return  `$ ${this.#balance}`;
    }
}let  account = new BankAccount();
console.log(account.getBalance());



// Abstraction
class CoffeeMachine{
    start(){
        return `Starting the Machine.......`;
    }
    BrewCoffee(){
        // complex calculation
        return `Brewing Coffee ....`;
    }
    pressStartButton(){
        let msg1 = this.start();
        let msg2 =  this.BrewCoffee();
        return `${msg1} \n ${msg2}`;
    }

}
let mymachine = new CoffeeMachine();
// console.log(mymachine.start());
// console.log(mymachine.BrewCoffee());
console.log(mymachine.pressStartButton());


// Polymorphism
class Bird {
    fly() {
        return `Flying...`;
    }
}
class Penguin extends Bird {
    fly() {
        return `Penguin can't fly`;
    }
}
let bird = new Bird();
let penguin = new Penguin();
console.log(bird.fly());;
console.log(penguin.fly());


// Static method
class Calculator{
    static add(a,b){
        return a + b;
    }
}
let cal = new Calculator();
// console.log(cal.add(2,3));  error
console.log(Calculator.add(2,3));



// Getter and Setter
class Employee{
    #salary;
    constructor(name,salary){
        if(salary<0){
            throw new Error("salary can't be negative");
        }
        this.name = name;
        this.#salary = salary;
    }
    get salary(){
        return `You are not allowed to view salary`;
    }
    set salary(value){
        if(value<0){
            console.error("Invalid Salary")
        }
        else{
            this._salary = value;
        }
    }
}
let emp = new Employee("Alice",-50000);
console.log(emp._salary);
// emp.salary = 60000;