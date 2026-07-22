// Check if a number is divisible by both 5 and 11.

function CheckDivisble(No)
{
    if((No % 5 == 0) && (No % 11 == 0))
    {
        console.log("It is divisible by 5 & 11");
    }
    else
    {
        console.log("It is not divisible by 5 & 11");
    }
}

CheckDivisble(55);
CheckDivisble(5);
CheckDivisble(11);
CheckDivisble(24);