///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for printing sumation of 1 to 5 number
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Sumation()
{
    int iSum = 0, iCnt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Sumation();

    printf("Sumation is :  %d", iRet);

    return 0;
}