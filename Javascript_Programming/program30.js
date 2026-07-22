// Assign grades based on marks. 

function grades(marks)
{
    if(marks >= 85 && marks <= 100)
    {
        console.log("A");
    }
    else if(marks >= 75 && marks <= 84)
    {
        console.log("B");
    }
    else if(marks >= 61 && marks <= 74)
    {
        console.log("C");
    }
    else if(marks >= 46 && marks <= 60)
    {
        console.log("D");
    }
    else if(marks >= 35 && marks <= 45)
    {
        console.log("E");
    }
    else
    {
        console.log("F");
    }
}

grades(35);
grades(67);
grades(5);
grades(97);