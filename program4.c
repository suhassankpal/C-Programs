/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:-Write the code for Addition of two numbers[Take input from user]
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Addition(int iValue1, int iValue2)
{
    int iAns = 0;

    iAns = iValue1 + iValue2;

    return iAns;
}
int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter the first no\n");
    scanf("%d", &iNo1);

    printf("Enter the second no\n");
    scanf("%d", &iNo2);

    iRet = Addition(iNo1, iNo2);

    printf("The addition of two number is :%d", iRet);
}