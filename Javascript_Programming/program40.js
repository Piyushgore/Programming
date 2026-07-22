// Find the factorial of number.

function factorial(No)
{
    let i = 1;
    let Mult = 1;

    for(i = 1;i <= No;i++)
    {
        Mult = Mult * i;
    }

    return Mult;
}

let iRet = 0;

iRet = factorial(5);
console.log(iRet);

iRet = factorial(0);
console.log(iRet);