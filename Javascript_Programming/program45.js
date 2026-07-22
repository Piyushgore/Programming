// Check whether a number is a palindrome.

function Palindrome(No)
{
    let iDigit = 0,i = 0;
    let Copy = No;
    let reverse = 0;

    for(i = 1;No != 0;i++)
    {
        iDigit = No % 10;
        reverse = (reverse * 10) + iDigit;
        No = Math.floor(No / 10);
    }

    if(Copy == reverse)
    {
        return true;
    }
    else
    {
        return false;
    }
}

let bRet = false;

bRet = Palindrome(121);

if(bRet == true)
{
    console.log("It is palindrome");
}
else
{
    console.log("It is not a palindrome");
}