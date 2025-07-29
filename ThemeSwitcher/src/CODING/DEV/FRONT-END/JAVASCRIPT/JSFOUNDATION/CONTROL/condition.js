let num1 = 5;
let num2 = 8;
/*
console.log("I am a reglular upper code");
if(num1>num2){
    console.log("num1 is greater than num2");    
}
else{
    console.log("No num1 is not greater than num2");    
}
console.log("I am a reglular bottom code");
*/


//Checking if a string is equal to another string
let username = "chai";
let anotherusername = "chai";
if(anotherusername != username){
    console.log("Pick another username");
}
else{
    // console.log("You can use this username");    
}


//Checking if a variable is number or not
let score = "44";
if (typeof score == "number") {
    console.log("Yep, this is a number");  
}
else{
    // console.log("No, this is not a number");
    
}


// checking if a boolean value is true or false

let isteaready = false;
if (isteaready) {
    console.log("Tea is ready");        
}
else{
    // console.log("Tea is not ready");   
}

// checking if an array is empty or not
let item = ["irem1"];
console.log(item.length);

if (item.length == 0) {
    console.log("Array is empty");
}
else{
    console.log("Array is not empty");
}