var arr = [23,4,6,2,1]

var first, second, third

first = second = third = Number.MAX_VALUE

if(arr.length < 2){
    console.log('Array too short!');
}
for (var i = 0; i < arr.length; i++){
    if(arr[i]<first){
        third = second
        second = first
        first = arr[i]
    }else if (arr[i] < second && arr[i] !== first) {
        second = arr[i];
    }else if(arr[i] < third && arr[i] !== second){
        third = arr[i]
    }
}

if(second == Number.MAX_VALUE){
    console.log('value not found!');
}else {
    console.log(`${first} ${second} ${third}`)   
}