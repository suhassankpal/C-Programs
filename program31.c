///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for display factor of number (Take number from user)
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

// Time complexity O(n)

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number for displaying factor of that number\n");
    scanf("%d", &iValue);

    printf("Factors are :\n");
    DisplayFactors(iValue);

    return 0;
}