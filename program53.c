////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and return sumation of digits
// INPUT:751          |INPUT:7515        |OUTPUT:75
// OUTPUT: 13          |OUTPUT:18          |INPUT:12
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int SumDigits(int iValue)
{
    int iDigit = 0;
    int iSum = 0;

    if (iValue < 0) // updator for negative value
    {
        iValue = -(iValue);
    }

    while (iValue != 0)
    {
        iDigit = iValue % 10;
        iSum = iSum + iDigit;

        iValue = iValue / 10;
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iNo);

    iRet = SumDigits(iNo);

    printf("Sumation of digits is : %d", iRet);

    return 0;
}