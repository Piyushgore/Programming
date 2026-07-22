// Find the smallest among three numbers.

function Min(No1,No2,No3)
{
    if(No1 == No2 && No2 == No3)
    {
        console.log("All are equal");
        return;
    }

    if(No1 < No2 && No1 < No3)
    {
        console.log(No1+" is smaller");
    }
    
    else if(No2 < No1 && No2 < No3)
    {
        console.log(No2+" is smaller");
    }
    else
    {
        console.log(No3+" is greater");
    }
}

Min(11,108,97);
Min(22,22,22);
Min(33,22,91);