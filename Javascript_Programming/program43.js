// Count digits in a number

function CountDigit(No)
{
    let iDigit = 0,i = 0;

    for(i = 1;No != 0;i++)
    {
        iDigit++;
        No = Math.floor(No / 10);
    }

    console.log("Number of digits are : "+iDigit);
}

CountDigit(108);