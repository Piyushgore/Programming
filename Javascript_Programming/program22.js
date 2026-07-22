// Calculate compound interest

let principle = 10000;
let A = 0;
let rate = 0.10;
let n = 1;
let time = 10;
let CI = 0;
let power = n * time;

A = (principle * ((1 + rate/n) ** power));   // Use ** for exponentiation
CI = A - principle;

console.log("simple interest calculated is : "+CI);