function rekMax(array,max=0){
    if(array.length==1) return max
    else {
        if(max <=array[0]){
            max=array[0]
            array=array.slice(1)
            return rekMax(array,max)
        } else {
            array=array.slice(1)
            return rekMax(array,max)
        }
        
    }
    
}
let max=rekMax([12,34,23,10,1,456,450,654,765,237,543])
console.log('max :',max)


