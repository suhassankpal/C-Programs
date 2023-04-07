///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for displaying no factors of number
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void NonFactors(int iValue)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt < iValue; iCnt++)
    {
        if ((iValue % iCnt) != 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iNo = 0;
    printf("Enter number\n");
    scanf("%d", &iNo);

    printf("Non-factors of %d are :\n", iNo);
    NonFactors(iNo);

    return 0;
}