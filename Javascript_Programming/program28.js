// Check whether a number is positive, negative, or zero.

function NumState(No)
{
    if(No > 0)
    {
        console.log("Number is positive");
    }
    else if(No == 0)
    {
        console.log("Number is zero");
    }
    else if(No < 0)
    {
        console.log("Number is negative");
    }
    else
    {
        console.log("Please enter valid number");
    }
}

NumState(108);
NumState(0);
NumState(-21);
NumState('H');