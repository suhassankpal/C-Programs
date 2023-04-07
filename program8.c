/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- Accept number from user and check whether it is divisible by 5 or not
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DivisibleByFive(int iValue)
{
    int iAns = 0;
    iAns = iValue % 5;

    if (iAns == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iNo = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iNo);

    iRet = DivisibleByFive(iNo);

    if (iRet == 1)
    {
        printf("%d is divisible by 5\n", iNo);
    }
    else
    {
        printf("%d is not divisible by 5\n", iNo);
    }

    return 0;
}