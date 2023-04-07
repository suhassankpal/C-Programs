///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for printing sumation of 1 to n number (Take number(n) from user)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Sumation(int iNo)
{
    int iSum = 0, iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter value\n");
    scanf("%d", &iValue);

    iRet = Sumation(iValue);

    printf("sumation of numbers from 1 to %d \n", iValue);
    printf("Sumation is :  %d", iRet);

    return 0;
}