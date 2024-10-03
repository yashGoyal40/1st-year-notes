// how to clone array
let array1 =["item1","item2"]
let array2 =["item1","item2"]
let array3 =array1
console.log(array1===array2)
console.log(array1===array3)
//array1 and array2 are clone of each other (are stored at diffrent locations
//at the memory) but array1 and array3 are stored in same place in the memory(heep)
array1.shift()
console.log(array1)
console.log(array2)
console.log(array3)
//method to clone array
let array4 = array1.slice(0)
console.log(array1===array4)
console.log(array4)
array1.unshift("item")
console.log(array1)
console.log(array4)
// method 2 
let array5 = [].concat(array1)
console.log(array5)
//method 3
let array6 = [...array1]
console.log(array6)
console.log(array1===array6)
console.log(Array.isArray(array6))
