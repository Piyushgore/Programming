// Check whether a number is perfect number

function perfectNum(No)
{
    let temp = No;
    let sum = 0;
    for(i = 0;i < temp;i++)
    {
        if(temp % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == No)
    {
        console.log("It is perfect number");
    }
    else
    {
        console.log("It is not perfect number");
    }
}

perfectNum(5);
perfectNum(6);