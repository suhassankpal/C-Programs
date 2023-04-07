///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Accept number from user and display even factors of number
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void EvenFactorDisplay(int iValue)
{
    int iCnt = 0;
    for (iCnt = 2; iCnt <= (iValue / 2); iCnt = iCnt + 2)
    {
        if ((iValue % iCnt == 0))
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iNo = 0;
    printf("Enter number\n");
    scanf("%d", &iNo);

    EvenFactorDisplay(iNo);

    return 0;
}