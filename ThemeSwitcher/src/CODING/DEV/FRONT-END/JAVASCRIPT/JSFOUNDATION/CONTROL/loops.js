/* 
1. Write a while loop that calculates the sum of all number from 1 to 5
and stores the result in a variable named 'sum'
*/
let sum = 0;
let i = 0;
while(i<=5){
    sum += i;
    i++;
}
console.log(sum);


/* 
2. Write a while loop that count down from5 to 1
and store in array named 'countdown'
*/
let countdown = [];
let j = 5;
while(j>0){
    countdown.push(j);
    j--;
}
console.log(countdown);



/* 
Write a do while loop that prompt user to enter their 
favorite tea type until they enter "stop".
store eaxch tea type in a arry named " tea collection"
*/
// let teacollection = [];
// let tea
// do {
//     tea = prompt(`Enter your favourite tea(type "stop" to finish)`)
//     if(tea != "stop"){
//         teacollection.push(tea);
//     }
// } while (tea != stop);



/* 
write a do while loop that add number from 1 to 3
abd store in variable named total
*/
let total = 0;
let k=1;
do{
    total += k;
    k++;
}while(k<=3);
console.log(total);


/* 
write a for loop that multiplies ecah elemnet in the 
array [2,4,6]  by 2 and store the result ina new array
named multipliednumbers
*/
let multipliednumbers = [];
let numbers = [2,4,6]
for (let i = 0; i < numbers.length; i++) {
    takenumber = numbers[i]*2;
    multipliednumbers.push(takenumber);
}
console.log(multipliednumbers);



/*
write a for loop that lists all the cities in a array
["paris","london","new york"," tokyo"] and store each city in a new array named 'citylist'
*/
let cities = ["paris","london","new york"," tokyo"];
let citylist = [];
for(let c = 0;c<cities.length;c++){
    const mycity = cities[c];
    citylist.push(mycity);
}
console.log(citylist);

