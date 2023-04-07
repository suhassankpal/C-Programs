///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Accept number from user and display number in deccending number till one (using while loop)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// INPUT :5
// OUTPUT: 5 4 3 2 1

#include <stdio.h>

void DisplayReverse(int iValue)
{
    printf("Numbers are in decresing order till 1 as fallow :\n");

    int iCnt = 0;

    iCnt = iValue;
    while (iCnt >= 1)
    {
        printf("%d\t", iCnt);
        iCnt--;
    }
}

int main()
{
    int iNo;
    printf("Enter number\n");
    scanf("%d", &iNo);

    DisplayReverse(iNo);

    return 0;
}