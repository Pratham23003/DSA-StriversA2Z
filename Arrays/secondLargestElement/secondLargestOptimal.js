let arr = [1,2,4,5,6,23,5,11,33,32];
let largestNum = arr[0];
let secondLargest = -1;

for(let i = 0; i <arr.length; i++){
    if(arr[i] > largestNum){
        secondLargest = largestNum;
        largestNum = arr[i];
    }
    else if(arr[i] < largestNum && arr[i] > secondLargest){
        secondLargest = arr[i];
    }
}

console.log(secondLargest);