// Check whether a number is prime.

function prime(No)
{
    let i = 1;
    let iCount = 0;

    for(i = 1;i <= No;i++)
    {
        if(No % i == 0)
        {
            iCount++;
        }   
    }
    if(iCount == 2)
    {
        console.log(No+" It is prime");
    }
    else
    {
        console.log(No+" it's not prime");
    }
}

prime(4);
prime(18);
prime(17);