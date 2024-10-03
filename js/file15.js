let temp ="";
let userOutput = prompt("please enter the temprature outside ")
userValidOutput = +userOutput
console.log(userValidOutput)
if(userValidOutput < 0){
    temp ="extremely cold! i am shiviring "
}else if (userValidOutput < 16){
    temp = "it is cold outside"
}else if (userValidOutput < 25){
    temp = "temp today is normal "
}else if (userValidOutput < 34){
    temp = "its hot outside"
}else if (userValidOutput < 45){
    temp = "turn on the AC"
}else{
    temp = "too hot! machine is not able to process"
}
console.log(temp)