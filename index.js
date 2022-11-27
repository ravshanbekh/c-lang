function summa(num,sum=0){
    if(num/10<1) return sum+num
    else {
        sum+=num%10
        num = (num-num%10)/10
        return summa(num,sum)
    }
}
let sum=summa(125478380)
console.log('summa =',sum)