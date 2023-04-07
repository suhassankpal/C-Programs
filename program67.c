////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and return Smallest digit from that number
// INPUT:721                  |INPUT:958               |OUTPUT:524
// OUTPUT:1                   |OUTPUT:5                |INPUT:2
//(Optimization by using break keyword)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    if (iNo < 0)
    {
        iNo = -(iNo);
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit < iMin)
        {
            iMin = iDigit;
        }

        if (iMin == 0)
        {
            break;
        }

        iNo = iNo / 10;
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = MinDigit(iValue);
    printf("Smallest digit from %d is : %d", iValue, iRet);

    return 0;
}
