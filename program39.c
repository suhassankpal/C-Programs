///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Accept number from user and display number in descending number till one (using for loop)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// INPUT :5
// OUTPUT: 5 4 3 2 1

#include <stdio.h>

void DisplayReverse(int iValue)
{
    printf("Numbers are in decresing order till 1 as fallow :\n");

    int iCnt = 0;

    for (iCnt = iValue; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
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