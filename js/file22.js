// push pop
let fruit=["apple","mango","banana"]
console.log(fruit)
// push
fruit.push("grapes")
console.log(fruit)
let poped=fruit.pop()
console.log(fruit)
console.log(poped)
// stk lifo manner last in first out
// unshift method(add item in starting unlike push )
fruit.unshift("papaya")
console.log(fruit)
//shift method(remove the item from starting unlike pop)
fruit.shift()
console.log(fruit)
// push pop is faster than shift and unshift 
//(will shift all the elements forward in the memory then will 
//unshift(add)or shift(rem))




