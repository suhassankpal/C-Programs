///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for printing factorial of number(Take number from user)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number for finding factorial of that number\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n", iValue, iRet);

    return 0;
}
