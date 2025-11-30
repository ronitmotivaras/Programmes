let date = new Date()

// console.log(date);
// console.log(date.toString());
// console.log(date.toDateString());
// console.log(date.toISOString());
// console.log(date.toJSON())
// console.log(date.toLocaleDateString())
// console.log(date.toLocaleString())

// console.log(typeof date); //obj

// let myDate = new Date(2023, 0, 23) //month 0 thi start thay js ma
// let myDate = new Date(2023, 0, 23, 5,3) 
// let myDate = new Date("2023-01-14") 
// let myDate = new Date("01-14-2023") 

// console.log(myDate.toLocaleString());

// let myTimeStamp = Date.now()

// console.log(myTimeStamp)
// console.log(myDate.getTime())

// console.log(Math.floor(Date.now() / 1000));

let newDate = new Date()
// console.log(newDate);
// console.log(newDate.getMonth() +1);
// console.log(newDate.getDay());

newDate.toLocaleString('default',{
    weekday :"long"
})