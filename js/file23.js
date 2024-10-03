//primitiveDataTypeVsRefrenceDatatype
//primitiveType
let num1 = 6
let num2 = num1
console.log("valueOfNumOneIs",num1)
console.log("value of num two is",num2)
num1++
console.log("after incrimenting num1")
console.log("value of num one is",num1)
console.log("value of num two is",num2)


// refrence type 
//array
let array1 = ["item1","item2"]
let array2 = array1
console.log("array1",array1)
console.log("array2",array2)
console.log("iHaveAddedOneitemInStartingByUnshift")
array1.unshift("item0")
console.log("array1",array1)
console.log("array2",array2)
//in refrence type the data is changing in both because it is a mutable data type




