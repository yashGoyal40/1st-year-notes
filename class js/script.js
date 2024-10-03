console.log("conect")
function changeCol(){
    document.body.style.backgroundColor ='blue'
}
function textHai(){
    document.getElementById('button').innerText="HIIIII"
}
let M=12n;
console.log(typeof M)
const hr=new Date().getHours();
let day;
// alert('wellcome')
if (hr<14){
    day="good day"
}
else if(hr==15){
    day='good afternoon'
}
else{
    day="good eevening"
}
let d=4
let daaay;
switch(d){
    case 1:
        daaay='monday'
        break
    case 2:
        daaay='tue'
        break
    case 3:
        daaay='wed'
        break
    case 4:
        daaay='thusday'
        break
    case 5:
        daaay='fri'
        break
    case 6:
        daaay="sat"
        break
    case 7:
        daaay='sun'
        break
    default:
        daaay="enter valid day bw (1-7)"
        break
}
let x="*"
document.getElementById('demo').innerText=day
document.getElementById('demoo').innerText=daaay
// if (confirm("press a button:")){
for(var i=0;i<7;i++){
    for(var j=0;j<=i;j++){
        document.write(x)
    }
    document.write('<br>')
}
document.write(x.repeat(8))
document.write('<br>')
for(var k=7;k>0;k--){
    for(var l=0;l<k;l++){
        document.write(x)
    }
    document.write('<br>')
}

const per={name:"yash",age:18,lname:"123"}
// document.write(per.name)
// document.write("<br>")
per.add="lpu"
delete per.lname
for (i in per){
    console.log(per[i])
    console.log(i)
}
const pere={name:"yash",age:18,lname:"123",
fullname:function(){
    return this.name+this.lname
}}
console.log(pere.fullname())


