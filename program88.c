///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************PATTERN PRINTING*************************************************************
//
// Problem statement:
// Write a program which accept number from user and display * times of that number
//
// INPUT: 4
// OUTPUT :*  *  *  *
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("*\t");
    }
    // printf("\n");
}

int main()
{
    int iNo = 0;
    printf("Enter number:\n");
    scanf("%d", &iNo);

    Display(iNo);
    return 0;
}
