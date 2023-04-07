////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and count even digits from number
// INPUT:751          |INPUT:7243        |OUTPUT:786424
// OUTPUT: 3          |OUTPUT:4         |INPUT:6
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CheckEvenDigits(int iValue)
{
    int iDigit = 0;
    int iEvenCnt = 0;

    if (iValue == 0)
    {
        return 1;
    }

    while (iValue != 0)
    {
        iDigit = iValue % 10;
        if (iDigit % 2 == 0)
        {
            iEvenCnt++;
        }

        iValue = iValue / 10;
    }

    return iEvenCnt;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iNo);

    iRet = CheckEvenDigits(iNo);

    printf("Count of even digits is : %d", iRet);

    return 0;
}