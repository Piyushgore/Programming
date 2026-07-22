// Find the largest among three numbers.

function Max(No1,No2,No3)
{
    if(No1 == No2 && No2 == No3)
    {
        console.log("All are equal");
        return;
    }

    if(No1 > No2 && No1 > No3)
    {
        console.log(No1+" is greater");
    }
    
    else if(No2 > No1 && No2 > No3)
    {
        console.log(No2+" is greater");
    }
    else
    {
        console.log(No3+" is greater");
    }
}

Max(11,108,97);
Max(22,22,22);
Max(33,22,91);