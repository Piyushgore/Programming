// Find whether a student passed (marks ≥ 35).

function PassCheck(Marks)
{
    if(Marks >= 35)
    {
        console.log("You have passed the exam!");
    }
    else
    {
        console.log("You have failed the exam");
    }
}

PassCheck(35);
PassCheck(97);
PassCheck(24);