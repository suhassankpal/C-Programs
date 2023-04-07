///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for printing addition of factors of number (Take number from user)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

// 0(N/2)
int SumOfFactors(int iNo)
{
    int iCnt = 0, iSum = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number for displaying factor of that number\n");
    scanf("%d", &iValue);

    iRet = SumOfFactors(iValue);

    printf("Addition of factors is %d", iRet);

    return 0;
}