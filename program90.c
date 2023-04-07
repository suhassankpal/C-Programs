///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************PATTERN PRINTING*************************************************************
//
// Problem statement:
// Write a program which accept number from user and display all numbers till that number
//
// INPUT: 4
// OUTPUT :1  2  3  4
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iValue)
{
    if (iValue <= 0)
    {
        iValue = -(iValue);
    }

    int iCnt = 0;
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter number:\n");
    scanf("%d", &iNo);

    Display(iNo);
    return 0;
}
