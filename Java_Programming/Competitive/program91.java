// Write a program to check whether a given year is a leap year or not

class Logic
{
    void checkLeapYear(int year)
    {
        if(year % 4 == 0)
        {
            System.out.println(year+" is leap year");
        }
        else
        {
            System.out.println(year+" is not a leap year");
        }
    }
}

class program91
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}