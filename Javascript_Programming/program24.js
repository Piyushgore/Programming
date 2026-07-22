// Find the largest among two numbers.

function Max(No1,No2)
{
    if(No1 > No2)
    {
        console.log(No1+" is greater");
    }
    else if(No1 == No2)
    {
        console.log("Both are equal");
    }
    else
    {
        console.log(No2+" is greater");
    }
}

Max(11,22);
Max(22,22);
Max(33,22);