///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************PATTERN PRINTING*************************************************************
//
// Problem statement:
// Write a program which accept number from user and display * times of number
//(For negative number use filter)
//
// INPUT: 4
// OUTPUT :*  *  *  *
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
        printf("*\t");
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
