// Print all odd numbers from 1 to N.

function PrintOdd(No)
{
    let i = 0;
    for(i = 1;i <= No;i++)
    {
        if(i % 2 != 0)
        {
            console.log(i);
        }
    }
}

PrintOdd(25);
PrintOdd(0);