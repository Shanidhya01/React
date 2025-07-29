let computer = {
    cpu : 12,
    ram : 16
};
let lenovo = {
    screen : "HD",
    __proto__: computer
};
let tomhardware = {};
console.log(`lenovo `,lenovo.__proto__);

let gerericCar = {tyres : 4};
let tesla = {
    driver : "AI"
}
Object.setPrototypeOf(tesla,gerericCar);
console.log(`tesla `,Object.getPrototypeOf(tesla));