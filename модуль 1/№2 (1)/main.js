'use strict'
/*
i 4 3 5 1 3 5 -> 5
                    -> 13
j 1 9 8 6 4 3 -> 9

0 <= i <= j < n
*/

function findMaxPair(firstArr, secondArr) {
    let maxPair = firstArr[0] + secondArr[0];
    let curA = firstArr[0];
    let curB = secondArr[0];
    let curBidx = 0;
    let curAidx = 0;

    for (let i = 1; i < firstArr.length; i++) {
        if (secondArr[i] > curB) {
            maxPair += secondArr[i] - curB;
            curB = secondArr[i];
            curBidx = i;
        }

        if ((firstArr[i] > curA) && (i <= curBidx)) {
            maxPair += firstArr[i] - curA;
            curA = firstArr[i];
            curAidx = i;
        }
    }
    
    return maxPair;
}

let firstArr = [4,3,5,1,3,5];
let secondArr = [1,9,8,6,4,3];

console.log( findMaxPair(firstArr, secondArr) );
