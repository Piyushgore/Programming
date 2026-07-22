// Reverse a number.

function Reverse(No)
{
    let iDigit = 0,i = 0;
    let reverse = 0;

    for(i = 1;No != 0;i++)
    {
        iDigit = No % 10;
        reverse = (reverse * 10) + iDigit;
        No = Math.floor(No / 10);
    }

    console.log(reverse);
}

Reverse(108);