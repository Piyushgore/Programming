// Find the sum of first N natural numbers.

function NaturalSum(No)
{
    let i = 1;
    let Sum = 0;

    for(i = 1;i <= No;i++)
    {
        Sum = Sum + i;
    }

    return Sum;
}

let iRet = 0;

iRet = NaturalSum(25);
console.log(iRet);

iRet = NaturalSum(0);
console.log(iRet);