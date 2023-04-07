/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- pritnt statement multiple times          (Take input from user for how many times print statement)
//
// Demonstration of Iteration using while loop
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    iCnt = 1;

    while (iCnt <= iValue)
    {
        printf("JAY GANESH.....\n");

        iCnt++;
    }
}

int main()
{
    int iNo = 0;

    printf("Enter number for how many times you want print statement \n");
    scanf("%d", &iNo);

    Display(iNo);

    return 0;
}