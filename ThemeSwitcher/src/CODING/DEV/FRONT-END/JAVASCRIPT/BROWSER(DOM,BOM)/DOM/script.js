// example 1

document
    .getElementById("changeTextButton")
    .addEventListener("click", function () {
        document.getElementById("myParagraph").textContent =
            "I have been changed!";
    });


// Example 2
document
    .getElementById("highlightFirstCity")
    .addEventListener("click", function () {
        let citiesList = document.getElementById("citiesList");
        citiesList.firstElementChild.classList.add("highlight");
        
    })


// example 3
document.getElementById("changeOrder").addEventListener("click", function () {
    let coffeetype = document.getElementById("coffeeType"); 
    coffeetype.textContent = "Espresso";
    coffeetype.style.backgroundColor = "brown";
    coffeetype.style.padding = "5px";
})


// example 4
document.getElementById("addNewItem").addEventListener("click",function(){
    let newitem = document.createElement("li");
    newitem.textContent = "Eggs";
    document.getElementById("shoppingList").appendChild(newitem);
})


// example 5
document.getElementById("removeLastTask").addEventListener("click",function(){
    let taskList = document.getElementById("taskList");
    taskList.lastElementChild.remove();
})

//example 6
document.getElementById("clickMeButton").addEventListener("click",function(){
    alert("You clicked me!");
})


//example 7
document.getElementById("teaList").addEventListener("click",function(event){
    if(event.target && event.target.matches(".teaItem")) {
        alert(`You selected ${event.target.textContent}`);
    }
})



// example 8
document.getElementById("feedbackForm").addEventListener("submit",function(event){
    event.preventDefault();
    let feedback = document.getElementById("feedbackInput").value;
    console.log(feedback);
    document.getElementById("feedbackDisplay").textContent = feedback;
})



//example 9
document.addEventListener('DOMContentLoaded', function() {
    document.getElementById("domStatus").textContent = "DOM Loaded";
});



// example 10
document
    .getElementById("toggleHighlight")
    .addEventListener("click", function() {
        let descriptionText = document.getElementById("descriptionText");
        descriptionText.classList.toggle("highlight");
});
