///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Write program for display factor of number (Take number from user)
//
// Time coplexity reduced by N/2;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

// O(N/2)
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
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