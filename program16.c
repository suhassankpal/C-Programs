/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement- pritnt statement multiple times          (Ex.print any statement 50 times then simple way is worst case)
//
// Demonstration of Iteration using "for loop"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
    int iCnt = 0; // Loop counter

    for (iCnt = 1; iCnt <= 5; iCnt++) //(loop initiaisation; loop condition; loop displacement)
    {
        printf("JAY GANESH....\n");
    }
}

int main()
{
    Display();

    return 0;
}

// write common statement in the loop block
// chech whether number of iteration are aleready know or not
// If iteration count is fix then use for loop
// If iteration count is not fix then use while loop