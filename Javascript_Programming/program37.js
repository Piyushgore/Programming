// Print all even numbers from 1 to N.

function PrintEven(No)
{
    let i = 0;
    for(i = 1;i <= No;i++)
    {
        if(i % 2 == 0)
        {
            console.log(i);
        }
        
    }
}

PrintEven(25);
PrintEven(0);