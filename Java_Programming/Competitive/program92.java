// Write a program to display the grade of a student based on marks.

class Logic
{
    void displayGrade(int marks)
    {
        if(marks >= 0 && marks <= 34)
        {
            System.out.println("Your grade is : F");
        }
        else if(marks >= 35 && marks <= 45)
        {
            System.out.println("Your grade is : D");
        }
        else if(marks >= 46 && marks <= 60)
        {
            System.out.println("Your grade is : C");
        }
        else if(marks >= 61 && marks <= 70)
        {
            System.out.println("Your grade is : B");
        }
        else if(marks >= 71 && marks <= 80)
        {
            System.out.println("Your grade is : A");
        }
        else if(marks >= 81 && marks <= 100)
        {
            System.out.println("Your grade is : A+");
        }
    }
}

class program92
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}