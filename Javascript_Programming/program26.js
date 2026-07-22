// Check whether a year is a leap year.

function LeapCheck(year)
{
    if(year % 4 == 0)
    {
        console.log("It is leap year");
    }
    else
    {
        console.log("It is not a leap year");
    }
}

LeapCheck(2024);
LeapCheck(2026);
LeapCheck(2015);