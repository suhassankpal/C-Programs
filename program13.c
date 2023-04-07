/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- Accept number from user and check whether it is divisible by 5 and 3
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

bool DivisibleByThreeAndFive(int iValue)
{
    if (iValue % 3 == 0)
    {
        if (iValue % 5 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
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

    printf("Enter number :\n");
    scanf("%d", &iNo);

    bRet = DivisibleByThreeAndFive(iNo);

    if (bRet == true)
    {
        printf("%d is divisible by 3 and 5", iNo);
    }
    else
    {
        printf("%d is not divisible by 3 and 5", iNo);
    }
    return 0;
}