// Write a for loop that loop through the array ["green tea", "black tea", "chai" ,"olong tea"] and stop the loop when it finds chai.Write
// Store all the tea before Chai in the array named selectedteas
let tea = ["green tea", "black tea", "chai" ,"olong tea"];
let selectedteas = [];
for(let i=0;i<tea.length;i++){
    if(tea[i] == "chai") break;
    selectedteas.push(tea[i]);
}
console.log(selectedteas);



// Write for loop that loops through the array[" London", "New York","Paris", "Berlin"] and Skip Paris.
//  Store the other cities in new array named visited cities.
let cities = [" London", "New York","Paris", "Berlin"];
let visited = [];
for (let i = 0; i < cities.length; i++) {
    if(cities[i] == "Paris") continue;
    visited.push(cities[i]);    
}
console.log(visited);




// use for-of loop to iterate through the array[1,2,3,4,5] and stop when the number four is found.
// Store the number before 4 in an array named small number
let numbers = [1,2,3,4,5];
let smallnumber = [];
for (const num of numbers) {
    if(num == 4) break;
    smallnumber.push(num);
}
console.log(smallnumber);




// Use for-of loop to iterate through the array[ "Chai","Green Tea", "Herbal tea", "Black tea"] and skip herbal tea.
// Store the other tea in an array named preferred teas.
let teas = [ "Chai","Green Tea", "Herbal tea", "Black tea"];
let preferredteas = [];
for (const tea of teas) {
    if(tea == "Herbal tea")   continue;
    preferredteas.push(tea)    ;
}
console.log(preferredteas);


// use a for-in loop to iterate through an object containing city's population. 
// Stop the loop when the population of Berlin is found and 
// store all the previous cities, population in a new object named cities population
let citiespopulation = {
    "London" : 8900000,
    "New York" : 8400000,
    "Berlin" : 3500000,
    "Paris" : 2200000
}
let citypopulations = {};
// console.log(Object.values(citiespopulation));
for (const city in citiespopulation) {
    // key = value 
    if(city == "Berlin") break;
    citypopulations[city] = citiespopulation[city];
}
console.log(citypopulations);



// Write a for-each loop that iterates through the array ["earl grey", "Green Tea", "Chai"," Olang tea". 
// Stop the loop when the chai is found, and store all the previous Teatype in array name available teas
let teacollection = ["earl grey", "Green Tea", "Chai"," Olang tea"];
let availableteas = [];
teacollection.forEach(function(tea){
    if(tea == "Chai") return;
    availableteas.push(tea);   
});
console.log(availableteas); 


// Write a for-each loop that iterates through the array["Berlin", "Tokyo", "Sydney", "Paris"] skips Sydney and
//  store the other cities in a new era named Trackcities
let worldcity = ["Berlin", "Tokyo", "Sydney", "Paris"];
let traveledcity = []; 
worldcity.forEach(city=>{
    if(city == "Sydney") return;
    traveledcity.push(city);
})
console.log(traveledcity);


// write of for loop that iterates through the array[ 2, 5 ,7 ,9]
//  skip the value 7 and multiply the rest by 2. 
// Store the result in new array, named double number
let number = [ 2, 5 ,7 ,9];
let doublenumber = [];
for(let i=0;i<number.length;i++){
    if(number[i] == 7) continue;
    doublenumber.push(number[i]*2);
}
console.log(doublenumber);

// Use for of loop 2 iterate through the array ["chai"," green tea", "black tea", "Jasmine tea", "herbal tea]
// stop when the length of the current tea name is greater than 10.
//  Store the tea iterated over in an array named Shorttea

let mytea = ["chai"," green tea", "black tea", "Jasmine tea", "herbal tea"];
let Shorttea = [];
for (const tea of mytea) {
    if(tea.length>10) break;   
    Shorttea.push(tea);
}
console.log(Shorttea);
