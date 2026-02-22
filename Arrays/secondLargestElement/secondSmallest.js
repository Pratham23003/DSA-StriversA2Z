const arr = [5,4,3,2,1];

let smallest = arr[0];
let secondSmallest = Infinity;

    for(let i = 0; i < arr.length; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }

        else if(arr[i] > smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i]
        }

        
    }
    console.log(smallest);
    console.log(secondSmallest);

