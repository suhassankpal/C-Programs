////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and return largest digit from that number
// INPUT:721                  |INPUT:958               |OUTPUT:524
// OUTPUT:7                   |OUTPUT:9                |INPUT:5
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = MaxDigit(iValue);
    printf("Largest digit from %d is : %d", iValue, iRet);

    return 0;
}
