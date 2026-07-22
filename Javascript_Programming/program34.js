// Create a simple calculator using +,-,*,/,%

let a = 0;
let b = 0;

function Calculator(char,a,b)
{
    if(char == '+')
    {
        return a + b;
    }
    else if(char == '-')
    {
        return a - b;
    }
    else if(char == '*')
    {
        return a * b;
    }
    else if(char == '/')
    {
        return a / b;
    }
    else if(char == '%')
    {
        return a % b;
    }
    else
    {
        console.log("Enter valid operation");
    }
}

let iRet = Calculator('*',21,51);
console.log("Solved value : "+iRet);
iRet = Calculator("log",25,57);
iRet = Calculator('-',21,24);
console.log("Solved value : "+iRet);
