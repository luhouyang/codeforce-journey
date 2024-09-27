"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}

/**
 *   Return the second largest number in the array.
 *   @param {Number[]} nums - An array of numbers.
 *   @return {Number} The second largest number in the array.
 **/
function getSecondLargest(nums) {
  // Complete the function
  nums.sort((a, b) => a - b);

  let largest = nums.slice(-1);

  let second = nums.slice(-1);
//   console.log(nums)

  for (var i = nums.length - 1; i >= 0; i--) {
    if (nums[i] < largest) {
      second = nums[i];
      break;
    }
  }

  console.log(second);
}

getSecondLargest([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]);
getSecondLargest([2, 3, 6, 6, 5]);
