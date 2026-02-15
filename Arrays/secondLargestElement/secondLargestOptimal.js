let arr = [1,2,4,5,6,23,5,11,33];
let largestNum = arr[0];
let secondLargest = -1;

for(let i = 0; i<arr.length; i++){
    if(arr[i] > largestNum){
        largestNum = arr[i];
        
    }
}
console.log(largestNum);
console.log(secondLargest);