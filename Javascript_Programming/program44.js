// Find the sum of digits

function SumDigit(No)
{
    let iDigit = 0,i = 0;
    let reverse = 0;

    for(i = 1;No != 0;i++)
    {
        iDigit = No % 10;
        reverse = reverse + iDigit;
        No = Math.floor(No / 10);
    }

    console.log("Sum of digits is : "+reverse);
}

SumDigit(108);