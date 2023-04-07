///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************PATTERN PRINTING*************************************************************
//
// Problem statement:
// Write a program which accept number from user and display below format
//
// INPUT: 4
// OUTPUT :1  *   2   *  3   *   4    *
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    if (iValue <= 0)
    {
        iValue = -(iValue);
    }

    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\t *\t ", iCnt);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter number:\t");
    scanf("%d", &iNo);

    Display(iNo);
    return 0;
}
