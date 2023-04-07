/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- Accept number from user and check whether it is divisible by 5 or not
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DivisibleByFive(int iValue)
{
    int iAns = 0;
    iAns = iValue % 5;

    if (iAns != 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iNo);

    iRet = DivisibleByFive(iNo);

    if (iRet != 0)
    {
        printf("%d is divisible by 5\n", iNo);
    }
    else
    {
        printf("%d is not divisible by 5\n", iNo);
    }

    return 0;
}