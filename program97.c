///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//**************************************PATTERN PRINTING*************************************************************
//
// Problem statement:
// Write a program which accept number from user and display character in below format
//
// INPUT: 4
// OUTPUT :A   B   C   D
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
// ASCII
// American Standard Code for Information Interchange

void Display(int iValue)
{
    int iCnt = 0;
    char ch = 'A';

    if (iValue <= 0)
    {
        iValue = -(iValue);
    }

    for (iCnt = 1; iCnt <= iValue; iCnt++, ch++)
    {
        printf("%c\t", ch);
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
