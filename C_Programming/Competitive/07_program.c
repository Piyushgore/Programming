//Accept one number from user and print that number of * from screen
void Display(int iNo) {
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while( iNo > 0 ) {
        printf(" * ");
        iNo--;
    }
}

int main() {
    int iValue = 0;
    printf("Enter number");
    scanf("%d" ,&iValue);
    Display(iValue);
    return 0;
}
