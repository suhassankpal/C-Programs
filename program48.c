////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and count no of digits in that number.
// INPUT:751          |INPUT:7515        |OUTPUT:75
// OUTPUT: 3          |OUTPUT:4          |INPUT:2
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iNo);

    iRet = CountDigits(iNo);

    printf("No of digits in number %d are : %d", iNo, iRet);

    return 0;
}

/*
 this application only work on positive numbers
 when we give negative input this code does not give correct output
 */