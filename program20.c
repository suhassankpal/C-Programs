/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- pritnt number 1 to 5
//
// Demonstration of Iteration using for loop
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}
int main()
{
    Display();

    return 0;
}