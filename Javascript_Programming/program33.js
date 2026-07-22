// Check whether a character is uppercase or lowercase.

function CaseCheck(char)
{
    if(char >= 'A' && char <= 'Z')
    {
        console.log("It is uppercase");
    }
    else if (char >= 'a' && char <= 'z')
    {
        console.log("It is lowercase");
    }
    else
    {
        console.log("Enter valid character");
    }
}

CaseCheck('L');
CaseCheck('p');
CaseCheck(11);
CaseCheck('@');