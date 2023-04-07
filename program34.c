///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement -
// Accept number from user and Checkwether number is perfect number or not(by reusing SumFactor function)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

int SumFactors(int iValue)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= (iValue / 2); iCnt++)
    {
        if ((iValue % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

// 6, 28, 496, 8128 are perfect numbers

bool CheckPerfectNo(int iData)
{
    int iAns = 0;

    iAns = SumFactors(iData);

    if (iAns == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iNo = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d", &iNo);

    bRet = CheckPerfectNo(iNo);

    if (bRet == true)
    {
        printf("%d is perfect number\n", iNo);
    }
    else
    {
        printf("%d is not perfect number\n", iNo);
    }

    return 0;
}