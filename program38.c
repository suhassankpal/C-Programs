///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement - Accept number from user and display table of that number (Basically we write table till 10)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayTable(int iValue)
{
    printf("Table of %d is :\n", iValue);
    printf("__________\n");

    int iCnt = 0;

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\n", iValue * iCnt);
    }
    printf("__________\n");
}

int main()
{
    int iNo = 0;
    printf("Enter number for display table\n");
    scanf("%d", &iNo);
    printf("__________\n");

    DisplayTable(iNo);

    return 0;
}