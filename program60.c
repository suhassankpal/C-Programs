////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and check whether number is palindrome or not
// INPUT:121                  |INPUT:707               |OUTPUT:111
// OUTPUT:121                 |OUTPUT:707              |INPUT:111
//(can not use if-else statement)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

int CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0;

    int iTemp = iNo;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;

        iNo = iNo / 10;
    }

    return (iRev == iTemp);
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number\n");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);

    if (bRet == true)
    {
        printf("%d is palindrome", iValue);
    }
    else
    {
        printf("%d is not palindrome", iValue);
    }

    return 0;
}