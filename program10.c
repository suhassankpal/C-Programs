/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- Accept number from user and check whether it is divisible by 5 or not
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// function name : DivisibleByFive
// function input : Integer value
// function output : boolean value
// Author : suhas dilip sankpal
// Date : 12/10/2022
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool DivisibleByFive(int iValue)
{
    int iAns = 0;
    iAns = iValue % 5;

    if (iAns == 0)
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
    bool bRet = 0;

    printf("Enter number\n");
    scanf("%d", &iNo);

    bRet = DivisibleByFive(iNo);

    if (bRet == true)
    {
        printf("%d is divisible by 5\n", iNo);
    }
    else
    {
        printf("%d is not divisible by 5\n", iNo);
    }

    return 0;
}