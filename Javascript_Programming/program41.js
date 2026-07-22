// Print the multiplication table of a number.

let i = 0;

function Table(No)
{
    for(i = 1;i <= 10;i++)
    {
        console.log(No+" x "+i+" = "+i*No);
    }
}

Table(2);