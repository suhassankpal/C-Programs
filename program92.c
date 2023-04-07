///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************PATTERN PRINTING*************************************************************
//
// Problem statement:
// Write a program which accept number from user and display all numbers till that number in reverse manner in below format
//
// INPUT: 4
//
// OUTPUT : 4
//          3
//          2
//          1
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

    for (iCnt = iValue; iCnt >= 1; iCnt--)
    {
        printf("%d\n", iCnt);
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
