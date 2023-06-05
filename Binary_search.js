// function binary_search(){
    let arr = [4,7,9,14,33,55,56,67,99];
    let key = 9;
    let start = 0
    let end = arr.length-1;
    mid = Math.floor(start+end/2);

    while(start <= end){
        // let mid = Math.floor(arr.length/2);
        // console.log(mid)
            if(arr[mid] == key ){
                console.log("found at index", mid)
            }
            if(arr[mid] < key ){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
            mid = Math.floor(start+end/2);
            // console.log("not found")
        }
// }
