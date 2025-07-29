// Task 1: Create Inheritance Using Prototypes
// Create a constructor Animal with a method makeSound(). Then create a constructor Dog that inherits from Animal and adds a method bark()
function Animal() {}
Animal.prototype.makeSound = function () {
    return 'Animal Sound';
}
function Dog() {}
Dog.prototype = Object.create(Animal.prototype);
Dog.prototype.bark = function () {
    return 'Woof!';
};

let dog = new Dog();    
console.log(dog.makeSound());
console.log(dog.bark());





// Task 2: Shape and Rectangle Inheritance
// Create a constructor function Shape that takes color as a parameter and has a method getColor() that returns the color.
// Create another constructor Rectangle that inherits from Shape and adds properties width and height. Add a method getArea() to Rectangle that returns the area of the rectangle.

function Shape(color) {
    this.color = color;
}
Shape.prototype.getColor = function () {
    return this.color;
}
function Rectangle(width, height) {
    Shape.call(this, 'black');
    this.width = width;
    this.height = height;
}
Rectangle.prototype = Object.create(Shape.prototype);
Rectangle.prototype.getArea = function () {
    return this.width * this.height;
}

let rect = new Rectangle(10, 20);
console.log(rect.getColor());
console.log(rect.getArea());