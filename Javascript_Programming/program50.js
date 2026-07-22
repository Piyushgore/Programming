// *
// **
// ***
// ****
// *****

let i = 0;
let j = 0;

function Pattern(Row,Col)
{
    for(i = 0;i<= Row;i++)
    {
        for(j = 0;j <= Col;j++)
        {
            process.stdout.write("*");
        }
        console.log();
    }
}

Pattern()