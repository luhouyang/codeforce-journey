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

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
  const v = ["a", "e", "i", "o", "u"];

  var v_list = [];
  var c_list = [];

  for (var i = 0; i < s.length; i++) {
    if (v.includes(s[i])) {
        v_list.push(s[i])
    } else {
        c_list.push(s[i])
    }
  }

  for (var i = 0; i < v_list.length; i++) {
    console.log(v_list[i])
  }

  for (var i = 0; i < c_list.length; i++) {
    console.log(c_list[i])
  }
}

vowelsAndConsonants('javascriptloops')