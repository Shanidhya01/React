function fetchdata() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            let success = true;
            if (success) {
                resolve("Data Fetched successfully");
            } else {
                reject("Data not fetched");
            }
        }, 3000);
    });
}

fetchdata()
    .then((data) => {
        console.log(data);
        return data.toLowerCase();  
    })
    .then((name) => {
        console.log(name); 
    })
    .catch((error) => console.error(error));
