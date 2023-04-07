/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- pritnt statement multiple times          (Take input from user for how many times print statement)
//
// Demonstration of Iteration using for loop
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("JAY GANESH.....\n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter number for how many times you want to print statement\n");

    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}