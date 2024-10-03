// ARRAYS
// refrence type 
// let fruit = "apple"; (only one is used at at time )
// arrays - ordered collection of items
let fruits = ["apple","banana","mango","geapes"]
console.log(fruits[0])
let numbers=[1,2,3,4]
console.log(numbers)
let mixed = [1,2,3,"yash",12n,null,undefined]
console.log(mixed)
fruits[0]="kivi"
console.log(fruits[0])
let len = mixed.length
for(let i= 0;i<len;i++){
    console.log(typeof mixed[i])
}
let i =0
while(i<=len-1){
    console.log(typeof mixed[i])
    i++
}
// length fungtion is used in array by length.arr
console.log(Array.isArray(mixed))
console.log(Array.isArray(i))