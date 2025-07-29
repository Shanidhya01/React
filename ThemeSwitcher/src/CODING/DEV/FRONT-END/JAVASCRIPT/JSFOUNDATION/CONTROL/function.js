// 1. Write a function named 'makeTea that takes one parameter, `typeofTea',
//  and returns a string like "Making green tea" when called with "green tea"'.
// Store the result in a variable named tea0rder`.
function maketea(typeoftea){
    return `Making ${typeoftea}`;
    console.log(test);    
}
let teaorder = maketea("lemon tea")
console.log(teaorder);



// 2. Create a function named 'orderTea' that takes one parameter, teaType`. 
// Inside this function, create another function named 'confirmorder that 
// returns a message like "Order confirmed for chai".
// Call confirmorder from within 'orderTea and return the result.
function ordertea(teatype){
    function confirmorder(){
        return `Order confirmed for chai`;
    }
    return confirmorder();
}
let orderconfirmation = ordertea("chai");
console.log(orderconfirmation);




// 3. Write an arrow function named 'calculateTotal that takes two parameters: price and `quantity.
// The function should return the total cost by multiplying the price and quantity.
// Store the result in a variable named 'totalCost`.
const calculateTotal = (price,quantity) => {
    return price * quantity;
}
let totalCost = calculateTotal(499,100);
console.log(totalCost);



// 4. Write a function named 'processTeaorder that takes another function, `makeTea', 
// as a parameter and calls it with the argument "earl grey".
//  Return the result of calling makeTea`.
function makeTea(typeofTea){
    return`maketea ${typeofTea}`;
}
function processTeaorder(teaFunction) {  
    return teaFunction  ('earl grey')
}
processTeaorder(makeTea);
let order = processTeaorder(makeTea);
console.log(order);



// 5. Write a function named 'createTeaMaker that returns another function. 
// The returned function should take one parameter, teaType', and
//  return a message like "Making green tea"
// Store the returned function in a variable named
// 'teamaker' and call it with "green tea"
function createTeaMaker() {
    return function(teaType){
        return `Making ${teaType}`;
    }
}
let teamaker = createTeaMaker();
console.log(teamaker("green tea"));
