function Person(name){
    this.name = name;
}

Person.prototype.greet = function(){
    console.log(`Hello ${this.name}`);
}

let naam = new Person("Shanidhya");
naam.greet();