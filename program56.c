////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement:Accept number from user and count odd and even digits and display it
// INPUT:751                  |INPUT:8426               |OUTPUT:8452
// OUTPUT: O(3) E(0)          |OUTPUT:O(0) E(4)         |INPUT:O(1) E(3)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenOddDigits(int iValue)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    int iOddCnt = 0;

    if (iValue == 0)
    {
        printf("Number of even digits are: 1  \n");
        printf("Number of odd digits are: 0   \n");

        return;
    }

    while (iValue != 0)
    {
        iDigit = iValue % 10;

        if (iDigit % 2 == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }

        iValue = iValue / 10;
    }

    printf("Number of even digits are : %d\n", iEvenCnt);
    printf("Number of odd digits are : %d\n", iOddCnt);
}

int main()
{
    int iNo = 0;

    printf("Enter number\n");
    scanf("%d", &iNo);

    DisplayEvenOddDigits(iNo);

    return 0;
}