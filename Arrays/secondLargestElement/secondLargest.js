//second largest
// this is a better approach then the brute force method (TC => O(N+N))

let arr = [1, 2, 4, 7, 7, 5];
let arr2 = [1,3,5,43,6,7,33];

secondLargestNum(arr);
secondLargestNum(arr2);

function secondLargestNum(arr) {
  let largestNumber = arr[0];

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > largestNumber) {
      largestNumber = arr[i];
    }
  }

  let secondLargest = -1;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > secondLargest && arr[i] != largestNumber) {
      secondLargest = arr[i];
    }
  }

  console.log(secondLargest);
}

