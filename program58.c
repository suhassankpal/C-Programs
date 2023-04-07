////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and reverse that number
// INPUT:751                  |INPUT:8426               |OUTPUT:8452
// OUTPUT:157                 |OUTPUT:6248              |INPUT:2548
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;

        iNo = iNo / 10;
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);

    printf("Reverse number is : %d", iRet);
    return 0;
}