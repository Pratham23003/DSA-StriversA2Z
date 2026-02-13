//largest element
const arr = [1,2,3,4,5];
let largestNum = arr[0];
for(let i = 0; i < arr.length; i++){
    if(arr[i] > largestNum){
        largestNum = arr[i];
    }
}
console.log(largestNum);