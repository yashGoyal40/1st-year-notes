"use stict"
// sring indexing 
let myname ="yash goyal";
//  y a s h   g o y a l
//  0 1 2 3 4 5 6 7 8 9
console.log(myname.length);
let naamp="harshit vashishtl";
console.log(naamp[naamp.length-1]);
console.log(myname[3]);
console.log(myname[(myname.length)-1]);

// trim()
let naam = "  yasl  ";
console.log(naam);
console.log(naam.length);
console.log(naam.trim());
console.log((naam.trim()).length);
naam= naam.trim();
console.log(naam);
let kaam = naam.trim();
console.log(kaam);
console.log(kaam.length);
naam = kaam;
console.log(naam);

// toUpperCase
let sonu = "somnu";
console.log(sonu);
console.log(sonu.toUpperCase())
sonu=sonu.toUpperCase()
console.log(sonu);

//  toUpperCase
let raj ="RNO";
console.log(raj)
raj=raj.toLocaleLowerCase()
console.log(raj)

//slice()
let newstr = "yash goyal";
let newstr1 = newstr.slice(0,5);
console.log(newstr1);

//typeof operator (primitive)
// string - "yy"
// number - 1,2
// boolean
// null
// undefined 
// Bigint
// symbol
let age=22;
let name ="op";
console.log(typeof age);
console.log(typeof name);

// number to string
console.log(typeof (age+""));
age = age+"";
console.log(typeof age);

// string to number
console.log(typeof +age)
age=String(age)
console.log(typeof age)
age=Number(age)
console.log(typeof age)