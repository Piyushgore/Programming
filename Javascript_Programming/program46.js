// Check whether a number is an Armstrong number.

function SumDigit(No)
{
    let iDigit = 0,i = 0;
    let Copy1 = No,Copy2 = No;
    let sum = 0,Count = 0;

    for(i = 1;Copy1 != 0;i++)
    {
        iDigit = Copy1 % 10;
        Count++;
        Copy1 = Math.floor(Copy1 / 10);
    }
    for(i = 0;Copy2 != 0;i++)
    {
        iDigit = Copy2 % 10;
        sum += iDigit ** Count;
        Copy2 = Math.floor(Copy2 / 10);
    }

    return sum;
}

function Armstrong(No)
{
    Ret = SumDigit(No);

    if(Ret == No)
    {
        console.log("It is Armstrong number");
    }
    else
    {
        console.log("It is not an Armstrong number");
    }
}

Armstrong(108);
Armstrong(9474);