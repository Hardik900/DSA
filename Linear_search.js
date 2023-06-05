let arr = [2,4,54,33,221,8,1];
let key=3;

for(i=0; i<=arr.length; i++){
    if(arr[i]=== key){
        console.log("Key element found")
        console.log("Key element found at index",i+1)
        break;
    }
    else{
        console.log("not found")
    }
}