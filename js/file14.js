// age detection 
// cofee/milk/softdrinks/beer
// milk 1-10
// cofee 10-20
// soft drinks 15-25
// beer 22 above
let age= "";
let userSelection = prompt("enter your coice in between(coffee/milk/softdrinks/beer) in all small letters without space  ")
if(userSelection=="milk"){
    age = "1-10"
}else{
    if(userSelection=="coffee"){
        age= "10-20"
    }else{
        if(userSelection=="softdrinks"){
            age= "15-25"
        }else{
            if(userSelection=="beer"){
                age = "above 22"
            }else{
                age ="sir please enter correctly"
            }
        }
    }
}
console.log(age)