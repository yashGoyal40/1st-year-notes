// nested if else

// learn with game (winning number 19)
// 19 your guess is right
// 18,20 close
// <=17 too low
// >=21 too high
let winningNumber = Math.random()*9
let userGuess = prompt("guess a number to win prices");
guesedNumber = +userGuess
ans= ""
if(guesedNumber===winningNumber){
    ans = "Your Guess Is Right , You Won Iphone 12 Max Pro"
}else{
    if(userGuess<(winningNumber-1)){
        ans = "Too Low"
    }else{
        ans = "too High"
    }
}

